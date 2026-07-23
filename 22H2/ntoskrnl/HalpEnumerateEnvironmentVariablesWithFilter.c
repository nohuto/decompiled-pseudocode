/*
 * XREFs of HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BBE70
 * Callers:
 *     HalEnumerateEnvironmentVariablesEx @ 0x1404BBA40 (HalEnumerateEnvironmentVariablesEx.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C3EE8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalpEnumerateEnvironmentVariablesWithFilter(
        int a1,
        unsigned __int8 (__fastcall *a2)(__int128 *, _WORD *, _QWORD),
        unsigned __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // edi
  int v5; // r13d
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r14
  unsigned int v8; // esi
  bool v9; // r15
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r13d
  bool v15; // cl
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rdx
  char v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h]
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 (__fastcall *v29)(__int128 *, _WORD *, _QWORD); // [rsp+68h] [rbp-98h]
  unsigned __int64 v30; // [rsp+70h] [rbp-90h]
  _DWORD *v31; // [rsp+78h] [rbp-88h]
  __int128 v32; // [rsp+80h] [rbp-80h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-70h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v29 = a2;
  v31 = a4;
  v30 = a3;
  v26 = a1;
  Affinity = 0LL;
  v23 = 0LL;
  v32 = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi
    || !HalEfiRuntimeServicesTable
    || !HalEfiRuntimeServicesTable[4]
    || !HalEfiRuntimeServicesTable[3] )
  {
    return 3221225474LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 || (a3 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    return 3221225485LL;
  v4 = *a4;
  Src[0] = 0;
  v5 = 20;
  v6 = a3;
  if ( a1 != 1 )
    v5 = 32;
  v7 = 0LL;
  v27 = v5;
  v8 = 0;
  v9 = v4 != 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v10 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    Size = 512LL;
    HalpEfiStartRuntimeCode(16LL);
    v11 = ((__int64 (__fastcall *)(size_t *, _WORD *, __int128 *))HalEfiRuntimeServicesTable[4])(&Size, Src, &v32);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    if ( v11 )
      break;
    if ( !v29 || v29(&v32, Src, 0LL) )
    {
      v12 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v12 != v6 )
      {
        v13 = v12 - v6;
        v6 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v4 >= v13 )
        {
          v4 -= v13;
        }
        else
        {
          v9 = 0;
          v4 = 0;
          v8 = -1073741789;
        }
      }
      v14 = Size + v5;
      if ( v26 != 1 )
        v14 = (v14 + 3) & 0xFFFFFFFC;
      v15 = 0;
      if ( v4 < v14 )
        v8 = -1073741789;
      v16 = 0;
      if ( v4 >= v14 )
      {
        v16 = v4 - v14;
        v15 = v9;
      }
      v9 = v15;
      if ( v26 != 1 )
      {
        if ( v15 )
        {
          *(_OWORD *)(v6 + 16) = v32;
          memmove((void *)(v6 + 32), Src, Size);
          v23 = v16;
          *(_DWORD *)(v6 + 4) = ((v6 + Size + 35) & 0xFFFFFFFC) - v6;
        }
        else
        {
          v23 = 0LL;
        }
        v24 = v6;
        HalpEfiStartRuntimeCode(8LL);
        v20 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))HalEfiRuntimeServicesTable[3])(
                Src,
                &v32,
                v19,
                &v23,
                v18);
        _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
        if ( v20 )
        {
          if ( v20 == 0x8000000000000005uLL )
          {
            v4 = 0;
            v9 = 0;
            v8 = -1073741789;
          }
          else
          {
            v8 = -1073741823;
            v4 = v16;
LABEL_42:
            if ( v20 )
              goto LABEL_47;
          }
        }
        else
        {
          v4 = v16;
          if ( v9 )
          {
            *(_DWORD *)(v6 + 8) = v23;
            v4 = v16 - v23;
            if ( v7 )
              *v7 = v24 - (_DWORD)v7;
            v7 = (_DWORD *)v6;
            goto LABEL_42;
          }
        }
        v17 = v23 + v14;
        goto LABEL_44;
      }
      if ( v15 )
      {
        *(_OWORD *)(v6 + 4) = v32;
        memmove((void *)(v6 + 20), Src, Size);
        if ( v7 )
          *v7 = v6 - (_DWORD)v7;
        v7 = (_DWORD *)v6;
      }
      v4 = v16;
      v17 = v14;
LABEL_44:
      v5 = v27;
      v6 += v17;
    }
  }
  if ( v11 != 0x800000000000000EuLL )
    v8 = -1073741823;
LABEL_47:
  if ( v22 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v7 )
    *v7 = 0;
  *v31 = v6 - v30;
  return v8;
}

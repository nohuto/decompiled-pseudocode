__int64 __fastcall HalpEnumerateEnvironmentVariablesWithFilter(
        int a1,
        unsigned __int8 (__fastcall *a2)(__int128 *, _WORD *),
        unsigned __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  int v5; // r13d
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdi
  int v8; // r15d
  bool v9; // r14
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r13d
  bool v15; // cl
  unsigned int v16; // r12d
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v23; // rax
  char v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+4Ch] [rbp-B4h]
  unsigned int v29; // [rsp+50h] [rbp-B0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 (__fastcall *v31)(__int128 *, _WORD *); // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h]
  _DWORD *v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-70h] BYREF
  _WORD Src[256]; // [rsp+A0h] [rbp-60h] BYREF

  v31 = a2;
  v33 = a4;
  v32 = a3;
  v28 = a1;
  Affinity = 0LL;
  v25 = 0LL;
  v34 = 0LL;
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
    v24 = 0;
  }
  else
  {
    v24 = 1;
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
    HalpEfiIncrementEfiCall(0LL);
    HalpEfiStartRuntimeCode(0x10u);
    ((void (__fastcall *)(size_t *, _WORD *, __int128 *))HalEfiRuntimeServicesTable[4])(&Size, Src, &v34);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFEF);
    HalpEfiDecrementEfiCall(0LL);
    if ( v11 )
      break;
    if ( !v31 || v31(&v34, Src) )
    {
      v12 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v12 != v6 )
      {
        v13 = v12 - v6;
        v6 = (v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v4 < v13 )
        {
          v9 = 0;
          v4 = 0;
          v8 = -1073741789;
        }
        else
        {
          v4 -= v13;
        }
      }
      v14 = Size + v5;
      if ( v28 != 1 )
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
      v29 = v16;
      v9 = v15;
      if ( v28 == 1 )
      {
        if ( v15 )
        {
          *(_OWORD *)(v6 + 4) = v34;
          memmove((void *)(v6 + 20), Src, Size);
          if ( v7 )
            *v7 = v6 - (_DWORD)v7;
          v7 = (_DWORD *)v6;
        }
        v23 = v14;
        v4 = v16;
        v5 = v27;
        v6 += v23;
      }
      else
      {
        if ( v15 )
        {
          *(_OWORD *)(v6 + 16) = v34;
          memmove((void *)(v6 + 32), Src, Size);
          v25 = v16;
          *(_DWORD *)(v6 + 4) = ((v6 + Size + 35) & 0xFFFFFFFC) - v6;
        }
        else
        {
          v25 = 0LL;
        }
        HalpEfiStartRuntimeCode(8u);
        v19 = ((__int64 (__fastcall *)(_WORD *, __int128 *, __int64, __int64 *, __int64))HalEfiRuntimeServicesTable[3])(
                Src,
                &v34,
                v18,
                &v25,
                v17);
        _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFF7);
        if ( v19 )
        {
          if ( v19 != 0x8000000000000005uLL )
          {
            v21 = -1073741823;
            goto LABEL_35;
          }
          v4 = 0;
          v8 = -1073741789;
          v9 = 0;
        }
        else
        {
          v4 = v29;
          if ( v9 )
          {
            *(_DWORD *)(v6 + 8) = v25;
            v4 -= v25;
            if ( v7 )
              *v7 = v6 - (_DWORD)v7;
            v7 = (_DWORD *)v6;
          }
          else
          {
            Size = (size_t)v7;
          }
        }
        v20 = v25 + v14;
        v5 = v27;
        v6 += v20;
      }
    }
  }
  if ( v11 != 0x800000000000000EuLL )
    v8 = -1073741823;
  v21 = v8;
LABEL_35:
  if ( v24 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v7 )
    *v7 = 0;
  *v33 = v6 - v32;
  return v21;
}

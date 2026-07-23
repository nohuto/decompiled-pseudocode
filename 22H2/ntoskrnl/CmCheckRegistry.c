/*
 * XREFs of CmCheckRegistry @ 0x140720A98
 * Callers:
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     RtlClearAllBits @ 0x140361940 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpCheckRegistry2 @ 0x1405F0040 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x140656ED8 (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1406E6268 (CmpValidateHiveSecurityDescriptors.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  char v8; // si
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-49h]
  int v18; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v20; // [rsp+58h] [rbp-11h] BYREF
  __int128 v21; // [rsp+68h] [rbp-1h]
  __int128 v22; // [rsp+78h] [rbp+Fh]
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  char v24; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+D8h] [rbp+6Fh]
  int v26; // [rsp+E8h] [rbp+7Fh]

  v25 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  p_BitMapHeader = 0LL;
  v18 = 0;
  v20 = 0LL;
  v8 = 0;
  v24 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( BugCheckParameter2 == CmpMasterHive )
    return v3;
  v9 = *(_DWORD *)(BugCheckParameter2 + 272) >> 3;
  v10 = (((v9 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                            v10,
                            0LL,
                            1649167683LL);
    v6 = v11;
    if ( !v11 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v9;
    BitMapHeader.Buffer = v11;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v25;
  }
  v12 = a2 & 0x10000;
  v26 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v12 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v13 = HvCheckHive(BugCheckParameter2, a2, a3, (__int64)p_BitMapHeader, (__int64)&v20, a3);
      v3 = v13;
      if ( v13 < 0 )
      {
        v17 = 16;
        goto LABEL_25;
      }
      if ( (int)v20 + (int)v21 + (int)v22 > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter2 + 4152) |= 0x400u;
      LODWORD(a2) = v25;
      *(_QWORD *)(BugCheckParameter2 + 4792) = v23;
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) < 0 )
      break;
    v13 = CmpValidateHiveSecurityDescriptors(BugCheckParameter2, a2, &v24, (__int64)p_BitMapHeader, a3);
    v3 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -2147483606 )
      {
        if ( v13 != -1073741267 )
        {
          v17 = 48;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      v8 = 1;
    }
    v13 = CmpCheckRegistry2(
            BugCheckParameter2,
            v25,
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
            v14,
            v24,
            p_BitMapHeader,
            a3,
            &v18);
    v3 = v13;
    if ( v13 >= 0 )
      goto LABEL_28;
    if ( v13 == -2147483606 )
    {
      v8 = 1;
LABEL_28:
      *(_DWORD *)(BugCheckParameter2 + 4804) = v18;
      v3 = v8 != 0 ? 0x8000002A : 0;
      goto LABEL_31;
    }
    if ( v13 != -1073741267 )
    {
      v17 = 64;
LABEL_25:
      v15 = v13;
      goto LABEL_30;
    }
LABEL_23:
    v12 = v26;
    v8 = 1;
    a2 = v25;
  }
  v3 = -1073741492;
  v17 = 32;
  v15 = -1073741492;
LABEL_30:
  SetFailureLocation(a3, 0, 11, v15, v17);
LABEL_31:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter2 + 32))(v6, v10);
  return v3;
}

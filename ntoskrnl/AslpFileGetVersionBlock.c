/*
 * XREFs of AslpFileGetVersionBlock @ 0x1407A0528
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407A0DEC (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140303F60 (RtlFileMapFree.c)
 *     RtlVerifyVersionInfo @ 0x140380780 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x1403911C0 (VerSetConditionMask.c)
 *     RtlFileMapMapView @ 0x1403ABF40 (RtlFileMapMapView.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407A12F0 (AslFileMappingEnsure.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  _WORD *v14; // rax
  _WORD *v15; // r15
  __int64 v16; // rcx
  ULONGLONG v17; // rax
  ULONGLONG v18; // rax
  __int64 v19; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *Src; // [rsp+48h] [rbp-1D0h] BYREF
  _WORD *v25; // [rsp+50h] [rbp-1C8h]
  __int64 v26; // [rsp+58h] [rbp-1C0h]
  _QWORD v27[3]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v28; // [rsp+78h] [rbp-1A0h] BYREF
  __int128 v29; // [rsp+88h] [rbp-190h]
  __int128 v30; // [rsp+98h] [rbp-180h]
  __int64 v31; // [rsp+A8h] [rbp-170h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+C0h] [rbp-158h] BYREF
  size_t Size; // [rsp+238h] [rbp+20h] BYREF

  Src = 0LL;
  v25 = 0LL;
  Size = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v6 = *(_QWORD *)(a3 + 72);
  if ( !v6 )
  {
    v7 = AslFileMappingEnsure(a3, a2, a2, a1);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a3 + 64) != 6 )
    {
      v7 = -1073741687;
      goto LABEL_44;
    }
    v27[0] = 16LL;
    v27[1] = 1LL;
    v27[2] = 0LL;
    v8 = *(_QWORD *)(a3 + 32);
    v26 = *(_QWORD *)(a3 + 40);
    v9 = LdrResSearchResource(v8, v27, 3LL, *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0, &Src, &Size, 0LL, 0LL);
    v7 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)(v9 + 1073741687) <= 2 )
        goto LABEL_44;
      if ( v9 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
        goto LABEL_43;
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.dwMajorVersion = 6;
      VersionInfo.dwMinorVersion = 2;
      v17 = VerSetConditionMask(0LL, 2u, 3u);
      v18 = VerSetConditionMask(v17, 1u, 3u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v18) < 0 )
        goto LABEL_32;
      v19 = *(_QWORD *)(a3 + 8);
      LOBYTE(v31) = 0;
      *(_QWORD *)&v28 = v19;
      v7 = RtlFileMapMapView((__int64)&v28, 1);
      if ( v7 < 0 )
        goto LABEL_43;
      AslLogCallPrintf(3LL);
      v8 = *((_QWORD *)&v29 + 1);
      v7 = LdrResSearchResource(*((_QWORD *)&v29 + 1), v27, 3LL, 0LL, &Src, &Size, 0LL, 0LL);
      AslLogCallPrintf(2LL);
      if ( v7 < 0 )
        goto LABEL_43;
      v10 = v30;
    }
    else
    {
      v10 = v26;
    }
    if ( Src )
    {
      v11 = (unsigned __int64)Src + Size;
      if ( (char *)Src + Size < Src )
      {
        v11 = -1LL;
        v12 = -1073741675;
      }
      else
      {
        v12 = 0;
      }
      if ( v12 < 0
        || (unsigned __int64)Src < v8
        || v11 > v10 + v8
        || !*(_BYTE *)(a3 + 59) && !*((_QWORD *)&v28 + 1) && v11 > v8 + *(_QWORD *)(a3 + 24) )
      {
        v7 = -1073741687;
        goto LABEL_43;
      }
      if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
      {
        v7 = -1073741595;
      }
      else
      {
        v14 = (_WORD *)AslAlloc(v13, Size);
        v15 = v14;
        v25 = v14;
        if ( v14 )
        {
          memmove(v14, Src, Size);
          if ( Size < (unsigned __int16)*v15 )
            *v15 = Size;
          *(_QWORD *)(a3 + 72) = v15;
          v25 = 0LL;
          v16 = *(_QWORD *)(a3 + 72);
          if ( *(_WORD *)(v16 + 2) < 0x34u )
            *a2 = 0LL;
          else
            *a2 = v16 + 40;
          *a1 = v16;
          v7 = 0;
          goto LABEL_44;
        }
        v7 = -1073741801;
      }
LABEL_43:
      AslLogCallPrintf(1LL);
      goto LABEL_44;
    }
    AslLogCallPrintf(1LL);
LABEL_32:
    v7 = -1073741687;
    goto LABEL_44;
  }
  v21 = *(_WORD *)(v6 + 2);
  v22 = v6 + 40;
  v23 = 0LL;
  if ( v21 >= 0x34u )
    v23 = v22;
  *a2 = v23;
  *a1 = *(_QWORD *)(a3 + 72);
  v7 = 0;
LABEL_44:
  RtlFileMapFree((__int64)&v28);
  return (unsigned int)v7;
}

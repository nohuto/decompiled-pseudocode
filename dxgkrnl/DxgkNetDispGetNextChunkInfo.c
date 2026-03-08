/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1C02CE630
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0061380 (DxgkMiracastGetNextChunkInfo.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        ULONG64 a5,
        char *a6,
        __int64 a7)
{
  _DWORD *v10; // r13
  struct D3DKMT_MIRACAST_CHUNK_DATA *v11; // rdi
  __int64 v12; // rdx
  int NextChunkInfo; // ebx
  unsigned int *v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // ecx
  __int64 v17; // rsi
  void *v18; // rcx
  NTSTATUS v19; // eax
  _DWORD *v20; // rsi
  char *v21; // rdx
  __int64 i; // rsi
  PVOID v23; // rcx
  unsigned int v25; // [rsp+30h] [rbp-1B8h] BYREF
  NTSTATUS v26; // [rsp+34h] [rbp-1B4h]
  ULONG64 v27; // [rsp+38h] [rbp-1B0h] BYREF
  int v28; // [rsp+40h] [rbp-1A8h]
  unsigned int v29; // [rsp+44h] [rbp-1A4h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v30; // [rsp+48h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-198h] BYREF
  __int64 v32; // [rsp+58h] [rbp-190h]
  __int64 v33; // [rsp+60h] [rbp-188h]
  __int64 v34[3]; // [rsp+68h] [rbp-180h] BYREF
  PVOID v35[36]; // [rsp+80h] [rbp-168h] BYREF

  v29 = a2;
  v10 = (_DWORD *)a5;
  v27 = a5;
  v34[1] = (__int64)a6;
  v32 = a7;
  v34[2] = a7;
  v25 = 0;
  v11 = 0LL;
  v30 = 0LL;
  memset(v35, 0, sizeof(v35));
  if ( a3 <= 4 )
  {
    LODWORD(v35[35]) = a3;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v34[0] = *a1;
    v14 = (unsigned int *)a5;
    if ( a5 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    v25 = *v14;
    v16 = (unsigned int)v35[35];
    if ( LODWORD(v35[35]) )
    {
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + LODWORD(v35[35]) > MmUserProbeAddress || a4 + LODWORD(v35[35]) < a4 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v16 = (unsigned int)v35[35];
      }
    }
    v17 = 0LL;
    v28 = 0;
    while ( (unsigned int)v17 < v16 )
    {
      v33 = (unsigned int)v17;
      v18 = *(void **)(a4 + 8 * v17);
      Object = 0LL;
      v19 = ObReferenceObjectByHandle(v18, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v35[v17 + 1] = Object;
      NextChunkInfo = v19;
      v26 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v33), v19);
        v20 = (_DWORD *)v32;
        goto LABEL_21;
      }
      v17 = (unsigned int)(v17 + 1);
      v28 = v17;
      v16 = (unsigned int)v35[35];
    }
    v11 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v15, 0x4B677844u, 64LL);
    v30 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry1(3LL, 8579LL);
      NextChunkInfo = -1073741801;
      goto LABEL_32;
    }
    LODWORD(v27) = 0;
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(v34, v29, (__int64)v35, &v25, v11, (unsigned int *)&v27);
    v26 = NextChunkInfo;
    LODWORD(v15) = v25;
    v20 = (_DWORD *)v32;
LABEL_21:
    if ( NextChunkInfo >= 0 )
    {
      if ( (_DWORD)v15 )
      {
        v21 = &a6[(unsigned int)v15];
        if ( (unsigned __int64)v21 > MmUserProbeAddress || v21 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v11, (unsigned int)v15);
      }
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v27;
      if ( a5 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = v15;
    }
  }
  else
  {
    v12 = a3;
    NextChunkInfo = -1073741811;
    WdLogSingleEntry3(3LL, v12, 4LL, -1073741811LL);
  }
LABEL_32:
  for ( i = 0LL; (unsigned int)i < LODWORD(v35[35]); i = (unsigned int)(i + 1) )
  {
    v23 = v35[i + 1];
    if ( v23 )
      ObfDereferenceObject(v23);
  }
  if ( v11 )
    operator delete(v11);
  return (unsigned int)NextChunkInfo;
}

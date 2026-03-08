/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1C026FEB4
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026821C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncProcessSurfaceComplete(PVOID Object, __int64 a2)
{
  unsigned int i; // r14d
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rbp
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v22; // eax
  int v23; // edx
  unsigned int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  _OWORD *v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v41; // [rsp+20h] [rbp-128h] BYREF
  __int16 v42; // [rsp+24h] [rbp-124h]
  char v43[34]; // [rsp+26h] [rbp-122h] BYREF
  __int128 v44; // [rsp+48h] [rbp-100h]
  __int128 v45; // [rsp+58h] [rbp-F0h]
  __int128 v46; // [rsp+68h] [rbp-E0h]
  __int128 v47; // [rsp+78h] [rbp-D0h]
  __int128 v48; // [rsp+88h] [rbp-C0h]
  __int128 v49; // [rsp+98h] [rbp-B0h]
  __int128 v50; // [rsp+A8h] [rbp-A0h]
  __int128 v51; // [rsp+B8h] [rbp-90h]
  __int128 v52; // [rsp+C8h] [rbp-80h]
  __int128 v53; // [rsp+D8h] [rbp-70h]
  __int128 v54; // [rsp+E8h] [rbp-60h]
  __int128 v55; // [rsp+F8h] [rbp-50h]
  int v56; // [rsp+108h] [rbp-40h]

  i = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  v6 = 0;
  if ( Object )
  {
    v7 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
    v8 = *(_DWORD *)(v7 + 9316);
    if ( v8 )
    {
      do
      {
        v9 = 196LL * v6;
        if ( a2 == *(_QWORD *)(v7 + v9 + 9488) )
        {
          memset_0(v43, 0, 0xE6uLL);
          v41 = 15466692;
          v42 = 0x8000;
          v10 = (_OWORD *)(v9 + v7 + 9320);
          v11 = v10[1];
          v44 = *v10;
          v12 = v10[2];
          v45 = v11;
          v13 = v10[3];
          v46 = v12;
          v14 = v10[4];
          v47 = v13;
          v15 = v10[5];
          v48 = v14;
          v16 = v10[6];
          v49 = v15;
          v17 = v10[7];
          v10 += 8;
          v50 = v16;
          v18 = *v10;
          v51 = v17;
          v19 = v10[1];
          v52 = v18;
          v20 = v10[2];
          v53 = v19;
          v21 = v10[3];
          LODWORD(v10) = *((_DWORD *)v10 + 16);
          v54 = v20;
          v55 = v21;
          v56 = (int)v10;
          HIDWORD(v44) |= 0x100u;
          EtwUpdateEvent(*(_QWORD *)((char *)&v44 + 4), 1073741830LL);
          v22 = LpcRequestPort(Object, &v41);
          v23 = *(_DWORD *)(v7 + 9316);
          v24 = v6;
          for ( i = v22; v24 < v23 - 1; v23 = *(_DWORD *)(v7 + 9316) )
          {
            v25 = 196LL * (v24 + 1);
            v26 = v24++;
            v27 = (_OWORD *)(v25 + v7 + 9320);
            v28 = v27[1];
            v29 = (_OWORD *)(196 * v26 + v7 + 9320);
            *v29 = *v27;
            v30 = v27[2];
            v29[1] = v28;
            v31 = v27[3];
            v29[2] = v30;
            v32 = v27[4];
            v29[3] = v31;
            v33 = v27[5];
            v29[4] = v32;
            v34 = v27[6];
            v29[5] = v33;
            v35 = v27[7];
            v27 += 8;
            v29[6] = v34;
            v29 += 8;
            v36 = *v27;
            *(v29 - 1) = v35;
            v37 = v27[1];
            *v29 = v36;
            v38 = v27[2];
            v29[1] = v37;
            v39 = v27[3];
            LODWORD(v27) = *((_DWORD *)v27 + 16);
            v29[2] = v38;
            v29[3] = v39;
            *((_DWORD *)v29 + 16) = (_DWORD)v27;
          }
          v8 = v23 - 1;
          *(_DWORD *)(v7 + 9316) = v23 - 1;
        }
        else
        {
          ++v6;
        }
      }
      while ( v6 < v8 );
    }
    ObfDereferenceObject(Object);
  }
  return i;
}

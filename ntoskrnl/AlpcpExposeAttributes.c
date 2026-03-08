/*
 * XREFs of AlpcpExposeAttributes @ 0x1407CDCB0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1407CCD50 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpExposeContextAttribute32 @ 0x14077DDCC (AlpcpExposeContextAttribute32.c)
 *     AlpcpExposeViewAttribute @ 0x14077E6DC (AlpcpExposeViewAttribute.c)
 *     AlpcpExposeHandleAttribute32 @ 0x140782BAC (AlpcpExposeHandleAttribute32.c)
 *     AlpcpReferenceBlob @ 0x1407CAA30 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     AlpcpExposeTokenAttribute @ 0x1407CE140 (AlpcpExposeTokenAttribute.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1407CE2D0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     AlpcpExposeHandleAttribute @ 0x1407CE344 (AlpcpExposeHandleAttribute.c)
 */

__int64 __fastcall AlpcpExposeAttributes(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  _DWORD *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r15
  int v11; // r13d
  __int64 v12; // rsi
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  ULONG_PTR v28; // rsi
  ULONG_PTR v29; // rdi
  int v30; // ebp
  __int64 v31; // rcx
  int v32; // esi
  _DWORD *v33; // rdi
  int v34; // r11d
  __int64 v35; // r8
  int v36; // r13d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // [rsp+20h] [rbp-58h]
  __int128 v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 v50; // [rsp+38h] [rbp-40h]
  unsigned int v51; // [rsp+40h] [rbp-38h]
  int v52; // [rsp+88h] [rbp+10h]

  v5 = a5;
  result = 0LL;
  *(_DWORD *)(a5 + 4) = 0;
  v7 = (_DWORD *)(a5 + 4);
  v8 = a4;
  v10 = a1;
  if ( a2 < 0 )
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      a1 = *(unsigned int *)(result + 8);
      *(_DWORD *)(a5 + 16) = a1;
      *v7 |= 0x80000000;
    }
    v32 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v50 = 0LL;
      v51 = 0;
      v33 = (_DWORD *)(a5 + (((__int64)a4 >> 63) & 0xC) + 8);
      v49 = 0LL;
      result = AlpcpExposeViewAttribute(a1, a3, (__int64)&v49, (_DWORD *)(a5 + 4));
      if ( (*v7 & 0x40000000) != 0 )
      {
        *v33 = v49;
        v33[1] = DWORD2(v49);
        v33[2] = v50;
        result = v51;
        v33[3] = v51;
      }
    }
    v34 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v35 = ((v8 >> 63) & 0xC) + 24;
      if ( !v32 )
        v35 = ((v8 >> 63) & 0xC) + 8;
      result = AlpcpExposeContextAttribute32(v10, a3, (_DWORD *)(a5 + v35), (_DWORD *)(a5 + 4));
    }
    v36 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v37 = ((v8 >> 63) & 0xC) + 24;
      if ( !v32 )
        v37 = ((v8 >> 63) & 0xC) + 8;
      v38 = v37 + 20;
      if ( !v34 )
        v38 = v37;
      result = AlpcpExposeHandleAttribute32(v10, a3, (_DWORD *)(a5 + v38), (_DWORD *)(a5 + 4));
      v34 = v8 & 0x20000000;
    }
    v39 = (v8 >> 63) & 0xC;
    v40 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v41 = v39 + 24;
      if ( !v32 )
        v41 = v39 + 8;
      v42 = v41 + 20;
      if ( !v34 )
        v42 = v41;
      v43 = v42 + 16;
      if ( !v36 )
        v43 = v42;
      result = AlpcpExposeTokenAttribute(v10, a3, a5 + v43, a5 + 4);
      v40 = v8 & 0x8000000;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v44 = v39 + 24;
      if ( !v32 )
        v44 = v39 + 8;
      v45 = v44 + 20;
      if ( (v8 & 0x20000000) == 0 )
        v45 = v44;
      v46 = v45 + 16;
      if ( !v36 )
        v46 = v45;
      v47 = v46 + 24;
      if ( !v40 )
        v47 = v46;
      v27 = a5 + v47;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v27, v7);
    }
  }
  else
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      *(_QWORD *)(a5 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 136) + 8LL);
      *v7 |= 0x80000000;
    }
    v11 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v12 = *(_QWORD *)(a3 + 144);
      v48 = a5 + (((__int64)a4 >> 63) & 0x18) + 8;
      if ( v12 )
      {
        v28 = *(_QWORD *)(v12 + 16);
        AlpcpReferenceBlob(v28);
        v29 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        AlpcpLockForCachedReferenceBlob(v29);
        v30 = *(_DWORD *)(v29 + 48);
        AlpcpUnlockBlob(v29);
        AlpcpDereferenceBlobEx(v28, 1);
        *(_DWORD *)(a3 + 40) |= 0x4000u;
        v31 = *(_QWORD *)(a3 + 144);
        *(_OWORD *)v48 = 0LL;
        *(_OWORD *)(v48 + 16) = 0LL;
        *(_QWORD *)(v48 + 16) = *(_QWORD *)(v31 + 40);
        *(_QWORD *)(v48 + 24) = *(_QWORD *)(v31 + 48);
        if ( (v30 & 1) != 0 )
          *(_DWORD *)v48 = 0x40000;
        *v7 |= 0x40000000u;
        v5 = a5;
      }
    }
    v13 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v14 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v14 = ((v8 >> 63) & 0x18) + 8;
      v15 = v14 + v5;
      v16 = (_QWORD *)(a3 + 64);
      if ( *(_QWORD *)(a3 + 56) == v10 || *v16 == v10 )
        v17 = *(_QWORD *)(a3 + 128);
      else
        v17 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)v15 = v17;
      if ( *(_QWORD *)(a3 + 56) == v10 || *v16 == v10 )
        v18 = *(_DWORD *)(a3 + 72);
      else
        v18 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v15 + 16) = v18;
      if ( (*(_DWORD *)(v10 + 416) & 6) == 4 )
        v19 = *(_QWORD *)(a3 + 104);
      else
        v19 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(v15 + 8) = v19;
      *(_DWORD *)(v15 + 20) = *(_DWORD *)(a3 + 264);
      *(_DWORD *)(v15 + 24) = *(_DWORD *)(a3 + 272);
      if ( a5 != -4 && v17 )
        *v7 |= 0x20000000u;
    }
    result = v8 & 0x10000000;
    v52 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v20 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v20 = ((v8 >> 63) & 0x18) + 8;
      if ( v13 )
        v20 += 32LL;
      result = AlpcpExposeHandleAttribute(v10, a3, v20 + v5);
    }
    if ( (v8 & 0x8000000) != 0 )
    {
      v21 = ((v8 >> 63) & 0x18) + 8;
      if ( v11 )
        v21 = ((v8 >> 63) & 0x18) + 40;
      if ( v13 )
        v21 += 32LL;
      v22 = v21 + 24;
      if ( !v52 )
        v22 = v21;
      result = AlpcpExposeTokenAttribute(v10, a3, a5 + v22, v7);
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v23 = (v8 >> 63) & 0x18;
      v24 = v23 + 8;
      if ( v11 )
        v24 = v23 + 40;
      if ( v13 )
        v24 += 32LL;
      v25 = v24 + 24;
      if ( !v52 )
        v25 = v24;
      v26 = v25 + 24;
      if ( (v8 & 0x8000000) == 0 )
        v26 = v25;
      v27 = a5 + v26;
      return AlpcpExposeWorkOnBehalfAttribute(v10, a3, v27, v7);
    }
  }
  return result;
}

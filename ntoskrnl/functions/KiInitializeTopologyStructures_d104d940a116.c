__int64 __fastcall KiInitializeTopologyStructures(__int64 BugCheckParameter1)
{
  int v1; // eax
  _DWORD *v2; // r12
  int v4; // r15d
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // r15d
  __int64 *v19; // rax
  __int64 v20; // rsi
  int v21; // r12d
  int v22; // r8d
  __int64 v23; // r13
  int v24; // edx
  unsigned __int64 v25; // r14
  unsigned __int16 *v26; // rcx
  unsigned __int16 *v27; // rbx
  unsigned int v28; // eax
  _QWORD *v29; // rcx
  int v30; // ebx
  unsigned int *v31; // r14
  unsigned __int16 **v32; // rsi
  unsigned int v33; // eax
  unsigned __int8 *v34; // rcx
  __int64 result; // rax
  ULONG_PTR v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 ProcessorNode; // rax
  __int64 v42; // rdx
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+34h] [rbp-CCh]
  int v45; // [rsp+38h] [rbp-C8h]
  unsigned int v46; // [rsp+3Ch] [rbp-C4h]
  __int64 *v47; // [rsp+40h] [rbp-C0h]
  _DWORD *v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD BugCheckParameter3[5]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  _QWORD v52[2]; // [rsp+70h] [rbp-90h]
  __int128 v53; // [rsp+80h] [rbp-80h]
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[2]; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-30h]
  _OWORD v61[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h]
  _OWORD v63[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int128 v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  _DWORD v69[6]; // [rsp+158h] [rbp+58h]

  v1 = *(_DWORD *)(BugCheckParameter1 + 212);
  v2 = (_DWORD *)(BugCheckParameter1 + 36);
  v51 = 0LL;
  v4 = *(_DWORD *)(BugCheckParameter1 + 36);
  v44 = v1;
  v48 = (_DWORD *)(BugCheckParameter1 + 36);
  v55 = BugCheckParameter1 + 38416;
  v45 = v4;
  v56 = BugCheckParameter1 + 38080;
  v6 = 5LL;
  v49 = 1;
  v57 = BugCheckParameter1 + 34576;
  v52[0] = BugCheckParameter1 + 34912;
  v7 = BugCheckParameter1 + 34936;
  v8 = *(_DWORD *)(BugCheckParameter1 + 164);
  v52[1] = v7;
  BugCheckParameter3[1] = *(_DWORD *)(BugCheckParameter1 + 38348);
  LODWORD(v7) = *(_DWORD *)(BugCheckParameter1 + 38344) * v8;
  BugCheckParameter3[0] = v8;
  v9 = *(_DWORD *)(BugCheckParameter1 + 160) * v8;
  v60 = 0LL;
  BugCheckParameter3[2] = v7;
  v10 = BugCheckParameter1 - (_QWORD)&v49;
  v11 = 0LL;
  BugCheckParameter3[3] = v9;
  v54 = 0LL;
  v53 = 0LL;
  do
  {
    v12 = &BugCheckParameter3[v11 - 1];
    v13 = ~(BugCheckParameter3[v11 - 1] - 1);
    v69[v11++] = v13;
    *(_DWORD *)((char *)v12 + v10 + 34840) = *(_DWORD *)(BugCheckParameter1 + 212) & v13;
    --v6;
  }
  while ( v6 );
  v14 = 0LL;
  v15 = 4LL;
  do
  {
    v16 = (_QWORD *)v52[v14];
    if ( v16 )
      *v16 = *(_QWORD *)(BugCheckParameter1 + 200);
    v17 = *(_QWORD *)((char *)&v54 + v14 * 8 + 8);
    if ( v17 )
    {
      *(_DWORD *)(v17 + 4) = 0;
      *(_DWORD *)v17 = 2097153;
      memset((void *)(v17 + 8), 0, 0x100uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v17, v4);
    }
    ++v14;
    --v15;
  }
  while ( v15 );
  v62 = 0LL;
  v64 = 0LL;
  v46 = KeNumberProcessors_0;
  memset(v61, 0, sizeof(v61));
  memset(v63, 0, sizeof(v63));
  if ( v4 )
  {
    v18 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v19 = KiProcessorBlock;
      v47 = KiProcessorBlock;
      do
      {
        v20 = *v19;
        v58 = 0LL;
        v21 = 1;
        v22 = v44;
        v23 = 0LL;
        v65 = 0LL;
        v24 = *(_DWORD *)(v20 + 212);
        v66 = v20 + 38416;
        v25 = 0LL;
        v43 = v24;
        v67 = v20 + 38080;
        v68 = v20 + 34576;
        v59[0] = v20 + 34912;
        v59[1] = v20 + 34936;
        v60 = 0LL;
        do
        {
          if ( (v24 & v69[v23 + 1]) == (v22 & v69[v23 + 1]) )
          {
            if ( !*(_QWORD *)((char *)v61 + v25 + 8) )
              *(_QWORD *)((char *)v61 + v25 + 8) = v20;
            if ( !*(_QWORD *)((char *)v63 + v25 + 8) )
            {
              KeGetProcessorNode(v20);
              ProcessorNode = KeGetProcessorNode(BugCheckParameter1);
              if ( v42 == ProcessorNode )
                *(_QWORD *)((char *)v63 + v25 + 8) = v20;
            }
            v26 = *(unsigned __int16 **)((char *)&v54 + v25 + 8);
            if ( v26 )
            {
              KeAddProcessorAffinityEx(v26, v18);
              v27 = *(unsigned __int16 **)((char *)&v65 + v25 + 8);
              KeAddProcessorAffinityEx(v27, v45);
              v28 = KeCountSetBitsAffinityEx(v27);
              if ( v28 > BugCheckParameter3[v23] )
                KeBugCheckEx(0x3Eu, v20, v28, (unsigned int)BugCheckParameter3[v23], v21);
              v22 = v44;
            }
            v29 = (_QWORD *)v52[v25 / 8];
            v24 = v43;
            if ( v29 && *(_QWORD *)(BugCheckParameter1 + 192) == *(_QWORD *)(v20 + 192) )
            {
              *v29 |= *(_QWORD *)(v20 + 200);
              *(_QWORD *)v59[v25 / 8] |= *(_QWORD *)(BugCheckParameter1 + 200);
            }
          }
          ++v21;
          ++v23;
          v25 += 8LL;
        }
        while ( v21 < 5 );
        v19 = v47 + 1;
        ++v18;
        ++v47;
      }
      while ( v18 < v46 );
      v2 = v48;
    }
  }
  v30 = 1;
  v31 = BugCheckParameter3;
  v32 = (unsigned __int16 **)&v54 + 1;
  do
  {
    if ( *v32 )
    {
      v33 = KeCountSetBitsAffinityEx(*v32);
      if ( v33 > *v31 )
        KeBugCheckEx(0x3Eu, BugCheckParameter1, v33, *v31, v30);
    }
    ++v30;
    ++v32;
    ++v31;
  }
  while ( v30 < 5 );
  if ( *((_QWORD *)&v61[0] + 1) )
    v34 = *(unsigned __int8 **)(*((_QWORD *)&v61[0] + 1) + 34904LL);
  else
    v34 = (unsigned __int8 *)(BugCheckParameter1 + 38680);
  KiAddProcessorToCoreControlBlock(v34, BugCheckParameter1);
  result = KeGetProcessorNode(BugCheckParameter1);
  v36 = BugCheckParameter1 - result + 34580;
  v37 = 0LL;
  v38 = 34580 - result;
  v39 = (_DWORD *)(result + 280);
  do
  {
    v40 = *((_QWORD *)v63 + v37);
    if ( *v2 )
    {
      if ( v40 )
      {
        result = (__int64)v39 + v38;
        *(_DWORD *)((char *)v39 + v36) = *(_DWORD *)((char *)v39 + v38 + v40);
      }
      else
      {
        result = (unsigned int)*v39;
        *(_DWORD *)((char *)v39 + v36) = result;
        ++*v39;
      }
    }
    ++v37;
    ++v39;
  }
  while ( v37 < 5 );
  return result;
}

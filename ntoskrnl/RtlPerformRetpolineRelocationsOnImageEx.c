__int64 __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  unsigned int *v21; // rbx
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  unsigned int *v24; // rdi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r13
  unsigned int *v27; // rdi
  unsigned __int64 v28; // r14
  unsigned int *v29; // rsi
  unsigned __int64 v30; // r13
  __int16 v31; // cx
  int v32; // ebx
  int v33; // ebx
  unsigned __int64 v34; // r12
  unsigned int *v35; // rdi
  unsigned __int64 v36; // r14
  unsigned int *v37; // rsi
  __int16 v38; // cx
  int v39; // ebx
  int v40; // ebx
  unsigned __int64 v42; // [rsp+50h] [rbp-81h]
  unsigned __int64 v43; // [rsp+50h] [rbp-81h]
  unsigned __int64 v44; // [rsp+60h] [rbp-71h]
  _OWORD v45[3]; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v46; // [rsp+A0h] [rbp-31h] BYREF
  int v47; // [rsp+A8h] [rbp-29h]
  __int16 v48; // [rsp+ACh] [rbp-25h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-21h] BYREF
  int v50; // [rsp+B8h] [rbp-19h]
  __int16 v51; // [rsp+BCh] [rbp-15h]

  LODWORD(v46) = 0;
  v9 = a1;
  v10 = a7;
  v11 = 0LL;
  v12 = a8;
  v13 = 0LL;
  v49 = a1;
  v14 = 0LL;
  memset(v45, 0, sizeof(v45));
  result = RtlpCaptureRetpolineBinaryInfoForImage(
             a1,
             a2,
             a3,
             a4 & -(__int64)(a6 != 0),
             (_DWORD *)(a5 & -(__int64)(a6 != 0)),
             (__int64)v45);
  if ( (int)result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(v9, a3, &v46);
    if ( (int)result >= 0 )
    {
      v17 = v9 + (unsigned int)v46;
      v18 = *(unsigned int *)(v17 + 4) + v17 + 8;
      v19 = v17 + 8;
      if ( v19 >= v18 )
        return 3221225659LL;
      do
      {
        switch ( *(_QWORD *)v19 )
        {
          case 3LL:
            v11 = v19;
            break;
          case 4LL:
            v13 = v19;
            break;
          case 5LL:
            v14 = v19;
            break;
        }
        v19 += *(unsigned int *)(v19 + 8) + 12LL;
      }
      while ( v19 < v18 );
      v44 = v14;
      if ( v11 )
      {
        v20 = *(unsigned int *)(v11 + 8) + v11 + 12;
        v21 = (unsigned int *)(v11 + 12);
        v46 = v20;
        if ( (unsigned __int64)v21 < v20 )
        {
          v22 = a3;
          do
          {
            if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v21, v10, v12, a9) )
            {
              v23 = (unsigned __int64)v21 + v21[1];
              v24 = v21 + 2;
              if ( (unsigned __int64)(v21 + 2) < v23 )
              {
                v25 = v49;
                do
                {
                  if ( (*v24 & 0xFFF) != 0 || v24 == v21 + 2 )
                    RtlApplyImportRelocationToImage(v25, v22, (__int64)v45, a5, *v21, v24, a6, 0);
                  ++v24;
                }
                while ( (unsigned __int64)v24 < v23 );
                v20 = v46;
              }
              v12 = a8;
              v10 = a7;
            }
            v21 = (unsigned int *)((char *)v21 + v21[1]);
          }
          while ( (unsigned __int64)v21 < v20 );
          v14 = v44;
        }
        if ( !v13 )
          goto LABEL_42;
      }
      else if ( !v13 )
      {
        if ( !v14 )
          return 3221225659LL;
        goto LABEL_44;
      }
      v26 = *(unsigned int *)(v13 + 8) + v13 + 12;
      v27 = (unsigned int *)(v13 + 12);
      v42 = v26;
      if ( v13 + 12 < v26 )
      {
        do
        {
          if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v27, v10, v12, a9) )
          {
            v28 = (unsigned __int64)v27 + v27[1];
            v29 = v27 + 2;
            if ( (unsigned __int64)(v27 + 2) < v28 )
            {
              v30 = v49;
              do
              {
                v31 = *(_WORD *)v29;
                if ( (*(_WORD *)v29 & 0xFFF) != 0 || v29 == v27 + 2 )
                {
                  v32 = *v27;
                  v46 = 0LL;
                  v47 = 0;
                  v33 = (v31 & 0xFFF) + v32;
                  v48 = 0;
                  RtlpConstructIndirectRelocationFixup(v33, (unsigned int)v45, a5, (_DWORD)v29, a6, (__int64)&v46);
                  RtlpApplyGenericRetpolineFixup(v30, a3, &v46, v33);
                }
                v29 = (unsigned int *)((char *)v29 + 2);
              }
              while ( (unsigned __int64)v29 < v28 );
              v26 = v42;
            }
            v12 = a8;
            v10 = a7;
          }
          v27 = (unsigned int *)((char *)v27 + v27[1]);
        }
        while ( (unsigned __int64)v27 < v26 );
        v14 = v44;
      }
LABEL_42:
      if ( !v14 )
        return 0LL;
      v9 = v49;
LABEL_44:
      v34 = *(unsigned int *)(v14 + 8) + v14 + 12;
      v35 = (unsigned int *)(v14 + 12);
      v43 = v34;
      while ( (unsigned __int64)v35 < v34 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v35, v10, a8, a9) )
        {
          v36 = (unsigned __int64)v35 + v35[1];
          v37 = v35 + 2;
          if ( (unsigned __int64)(v35 + 2) < v36 )
          {
            do
            {
              v38 = *(_WORD *)v37;
              if ( (*(_WORD *)v37 & 0xFFF) != 0 || v37 == v35 + 2 )
              {
                v39 = *v35;
                v49 = 0LL;
                v50 = 0;
                v40 = (v38 & 0xFFF) + v39;
                v51 = 0;
                RtlpConstructSwitchJumpRelocationFixup(v40, (unsigned int)v45, a5, (_DWORD)v37, a6, (__int64)&v49);
                RtlpApplyGenericRetpolineFixup(v9, a3, &v49, v40);
              }
              v37 = (unsigned int *)((char *)v37 + 2);
            }
            while ( (unsigned __int64)v37 < v36 );
            v34 = v43;
          }
          v10 = a7;
        }
        v35 = (unsigned int *)((char *)v35 + v35[1]);
      }
      return 0LL;
    }
  }
  return result;
}

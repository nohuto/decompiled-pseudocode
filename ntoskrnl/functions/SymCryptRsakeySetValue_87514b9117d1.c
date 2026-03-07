__int64 __fastcall SymCryptRsakeySetValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // edi
  unsigned int v14; // esi
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  int v25; // ecx
  unsigned int v26; // r11d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // r8d
  bool v34; // cc
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebp
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rbp
  struct _KSEMAPHORE *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rbp
  unsigned int v50; // esi
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  struct _KSEMAPHORE *v61; // rdi
  int v62; // eax
  unsigned int v63; // [rsp+30h] [rbp-58h]
  unsigned int v64; // [rsp+34h] [rbp-54h]
  unsigned int v65; // [rsp+38h] [rbp-50h]
  __int64 v66; // [rsp+38h] [rbp-50h]
  unsigned __int64 v67; // [rsp+40h] [rbp-48h]
  unsigned int v68; // [rsp+40h] [rbp-48h]
  __int64 v69; // [rsp+48h] [rbp-40h]
  __int64 v71; // [rsp+90h] [rbp+8h]
  struct _KSEMAPHORE *v72; // [rsp+90h] [rbp+8h]
  unsigned int v75; // [rsp+D0h] [rbp+48h]
  int v76; // [rsp+D0h] [rbp+48h]
  int v77; // [rsp+D0h] [rbp+48h]

  v64 = 0;
  v10 = a2;
  v63 = 0;
  v11 = a1;
  v75 = 0;
  if ( !a1 || !a2 || a4 != 1 || !a3 )
    return 32782;
  if ( a7 == 2 )
  {
    if ( !a5 || !a6 || !*a5 || !a5[1] || !*a6 || !a6[1] )
      return 32782;
  }
  else if ( a7 )
  {
    return 32782;
  }
  v14 = *(_DWORD *)(a10 + 16);
  v15 = 16 * v14;
  v65 = v14;
  if ( a7 )
  {
    v63 = SymCryptSizeofIntFromDigits(v14, a2);
    v75 = SymCryptSizeofIntFromDigits(2 * v14, v16);
    v64 = SymCryptSizeofDivisorFromDigits(v14);
    v17 = v14 << 7;
    v18 = v14 * (v15 < 32 * v14 ? 32 : 16);
    if ( (int)v17 + 64 > v18 )
      v18 = v17 + 64;
    v19 = v14 << 6;
    v20 = v18;
    v21 = (unsigned int)v19;
    v22 = v20 + 6 * v19 + v17 + 512;
    v23 = (unsigned int)(v19 + 64);
    if ( v15 > (unsigned int)v23 )
      v23 = v15;
    v67 = v23;
    v24 = (unsigned int)v23;
    if ( v22 > v23 )
      v24 = v22;
    v25 = v65 << 8;
    v26 = (v65 << 8) + 64;
    v27 = v26;
    if ( v22 > v26 )
      v27 = v22;
    v28 = v27 + 2 * (v21 + 64);
    v29 = v24;
    v30 = v25 + 192;
    if ( v15 > v25 + 192 )
      v30 = v15;
    v31 = v30;
    v32 = v20 + ((v65 + 1) << 9);
    v10 = a2;
    if ( v28 > v24 )
      v29 = v28;
    v33 = v67;
    if ( v22 > v26 )
      v26 = v32;
    v34 = v22 <= v67;
    v14 = v65;
    if ( !v34 )
      v33 = v32;
    v34 = v28 <= v24;
    v11 = a1;
    if ( !v34 )
      v33 = v26 + v17 + 128;
    if ( v31 > v29 )
      v33 = v31;
    v35 = v64 + v63 + v75 + v33;
  }
  else
  {
    v36 = (v14 << 8) + 192;
    if ( v15 > v36 )
      v36 = 16 * *(_DWORD *)(a10 + 16);
    v35 = v36;
  }
  v71 = v35;
  v68 = v35;
  v37 = SymCryptCallbackAlloc(v35);
  if ( v37 )
  {
    v38 = SymCryptIntFromModulus(*(_QWORD *)(a10 + 112));
    v12 = SymCryptIntSetValue(v11, v10, a8, v38);
    if ( !v12 )
    {
      v39 = SymCryptIntFromModulus(*(_QWORD *)(a10 + 112));
      v40 = SymCryptIntBitsizeOfValue(v39);
      *(_DWORD *)(a10 + 12) = v40;
      if ( v40 <= *(_DWORD *)(a10 + 8) )
      {
        if ( v40 < 0x100 )
        {
LABEL_63:
          v12 = 32769;
        }
        else
        {
          v41 = *(_QWORD *)(a10 + 112);
          v42 = SymCryptIntFromModulus(v41);
          SymCryptIntToModulus(v42, v41, v40, 1, v37, v71);
          v43 = 0LL;
          *(_DWORD *)(a10 + 20) = 1;
          do
          {
            *(_QWORD *)(a10 + 8 * v43 + 48) = *(_QWORD *)(a3 + 8 * v43);
            v43 = (unsigned int)(v43 + 1);
          }
          while ( (unsigned int)v43 < *(_DWORD *)(a10 + 20) );
          if ( a7 )
          {
            v44 = v63 + v37;
            v72 = (struct _KSEMAPHORE *)SymCryptIntCreate(v37, v63, v14);
            v45 = v72;
            v46 = SymCryptIntCreate(v44, v75, 2 * v14);
            v47 = v75 + v44;
            v66 = v46;
            v48 = SymCryptDivisorCreate(v47, v64, v14);
            v49 = v64 + v47;
            v50 = v68 - v75 - v63 - v64;
            *(_DWORD *)(a10 + 44) = 0;
            v69 = v48;
            v51 = 0LL;
            *(_DWORD *)(a10 + 24) = a7;
            v76 = 0;
            while ( 1 )
            {
              v52 = (unsigned int)v51;
              v12 = SymCryptIntSetValue(a5[v51], a6[v51], a8, v45);
              if ( v12 )
                break;
              v45 = v72;
              v53 = SymCryptIntBitsizeOfValue(v72);
              *(_DWORD *)(a10 + 4 * v52 + 28) = v53;
              v54 = SymCryptDigitsFromBits(v53);
              *(_DWORD *)(a10 + 4 * v52 + 36) = v54;
              if ( *(_DWORD *)(a10 + 44) > v54 )
                v54 = *(_DWORD *)(a10 + 44);
              *(_DWORD *)(a10 + 44) = v54;
              if ( *(_DWORD *)(a10 + 4 * v52 + 28) < 0x80u )
                goto LABEL_63;
              v51 = (unsigned int)(v76 + 1);
              v76 = v51;
              if ( (unsigned int)v51 >= *(_DWORD *)(a10 + 24) )
              {
                SymCryptRsakeyCreateAllObjects((_DWORD *)a10, v55);
                v56 = 0LL;
                v77 = 0;
                if ( *(_DWORD *)(a10 + 24) )
                {
                  while ( 1 )
                  {
                    v57 = (unsigned int)v56;
                    v58 = SymCryptIntFromModulus(*(_QWORD *)(a10 + 8 * v56 + 120));
                    v12 = SymCryptIntSetValue(a5[v57], a6[v57], a8, v58);
                    if ( v12 )
                      break;
                    v59 = SymCryptIntFromModulus(*(_QWORD *)(a10 + 8 * v57 + 120));
                    if ( (SymCryptIntGetValueLsbits32(v59) & 1) == 0 )
                      goto LABEL_44;
                    v60 = *(_QWORD *)(a10 + 8 * v57 + 120);
                    v61 = (struct _KSEMAPHORE *)v50;
                    v62 = SymCryptIntFromModulus(v60);
                    SymCryptIntToModulus(v62, v60, *(_DWORD *)(a10 + 12), 10, v49, v50);
                    v56 = (unsigned int)(v77 + 1);
                    v77 = v56;
                    if ( (unsigned int)v56 >= *(_DWORD *)(a10 + 24) )
                      goto LABEL_61;
                  }
                }
                else
                {
                  v61 = (struct _KSEMAPHORE *)v50;
LABEL_61:
                  v12 = SymCryptRsakeyCalculatePrivateFields(a10, v69, v72, v66, v49, v61);
                  if ( !v12 )
                    *(_BYTE *)(a10 + 4) = 1;
                }
                break;
              }
            }
          }
        }
      }
      else
      {
LABEL_44:
        v12 = 32782;
      }
    }
    SymCryptWipe(v37, v68);
    SymCryptCallbackFree(v37);
  }
  else
  {
    return 32783;
  }
  return v12;
}

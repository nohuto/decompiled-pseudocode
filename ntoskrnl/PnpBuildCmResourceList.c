int __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r13
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r14
  _DWORD *Pool2; // rax
  _DWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // eax
  _DWORD *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  _WORD *v24; // rsi
  int v25; // edi
  __int16 v26; // ax
  char *v27; // rsi
  int v28; // eax
  HANDLE v29; // rsi
  char *v30; // rax
  int v31; // r15d
  int v32; // eax
  __int64 v33; // rax
  int v35; // [rsp+38h] [rbp-D0h]
  int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  _QWORD Destination[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h]
  _QWORD v40[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int128 v44; // [rsp+98h] [rbp-70h] BYREF
  char v45; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = a1;
  v41[0] = a1;
  v36 = a2;
  v5 = 0;
  Handle = 0LL;
  v7 = *(_QWORD *)(v2 + 16);
  P = 0LL;
  v6 = *(_QWORD *)v7;
  Destination[0] = v6;
  LODWORD(v7) = *(_DWORD *)(v6 + 20);
  if ( !(_DWORD)v7 )
    goto LABEL_42;
  v8 = (__int64 *)(v6 + 24);
  v9 = (unsigned int)v7;
  do
  {
    v7 = *v8++;
    v5 += *(_DWORD *)(v7 + 276) + 1;
    --v9;
  }
  while ( v9 );
  if ( !v5 )
  {
LABEL_42:
    *(_DWORD *)(v4 + 56) = -1073741595;
    goto LABEL_43;
  }
  LODWORD(v39) = 20 * (v5 + 1);
  Destination[1] = ExAllocatePool2(256LL, (unsigned int)v39, 538996816LL);
  v10 = (_DWORD *)Destination[1];
  if ( !Destination[1] )
  {
LABEL_35:
    LODWORD(v7) = -1073741670;
    *(_DWORD *)(v4 + 56) = -1073741670;
LABEL_43:
    *(_QWORD *)(v4 + 48) = 0LL;
    goto LABEL_21;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(20 * (v5 + 1)), 538996816LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    ExFreePoolWithTag((PVOID)Destination[1], 0);
    goto LABEL_35;
  }
  v13 = Destination[0];
  v14 = Destination[1] + 20LL;
  *(_DWORD *)Destination[1] = 1;
  v10[1] = *(_DWORD *)v2;
  v10[2] = *(_DWORD *)(v2 + 4);
  v10[3] = 65537;
  v10[4] = v5;
  *Pool2 = 1;
  Pool2[1] = *(_DWORD *)v2;
  v15 = *(_DWORD *)(v2 + 4);
  v16 = v12 + 5;
  v12[2] = v15;
  v7 = 0LL;
  v12[3] = 65537;
  v12[4] = v5;
  LODWORD(v37) = 0;
  if ( !*(_DWORD *)(v13 + 20) )
  {
LABEL_19:
    if ( v36 )
    {
      v27 = *(char **)v4;
      LODWORD(v7) = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
      if ( (int)v7 >= 0 )
      {
        v36 = 0;
        v40[1] = L"PnP Manager";
        v40[0] = 1572886LL;
        v41[1] = L"PnpManager";
        v41[0] = 1441812LL;
        *(_OWORD *)&Destination[1] = 0LL;
        v28 = ObQueryNameStringMode(v27, (__int64)&v44, 0x200u, &v36, 0);
        v29 = Handle;
        if ( v28 >= 0 )
        {
          WORD1(v44) = 496;
          v30 = &v45;
          if ( (_WORD)v44 )
            v30 = (char *)*((_QWORD *)&v44 + 1);
          *((_QWORD *)&v44 + 1) = v30;
          *(_OWORD *)&Destination[1] = v44;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
          v31 = v39;
          if ( (int)IopWriteResourceList(v29, v40, v41, &Destination[1], v12, v39) >= 0 )
          {
            *(_OWORD *)&Destination[1] = v44;
            RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
            IopWriteResourceList(v29, v40, v41, &Destination[1], v10, v31);
          }
        }
        LODWORD(v7) = ZwClose(v29);
      }
    }
    *(_QWORD *)(v4 + 48) = v10;
    v3 = v12;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(v13 + 8 * v7 + 24);
    if ( !*(_BYTE *)(v17 + 8) )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v17 + 136);
      v16[4] = *(_DWORD *)(v17 + 152);
      *(_OWORD *)v14 = *(_OWORD *)(v17 + 136);
      v32 = *(_DWORD *)(v17 + 152);
LABEL_33:
      *(_DWORD *)(v14 + 16) = v32;
      goto LABEL_17;
    }
    v18 = *(_QWORD *)(v17 + 32);
    v40[0] = v18;
    if ( *(_DWORD *)(v18 + 128) == 2 )
    {
      v19 = *(_QWORD *)(v18 + 112);
    }
    else
    {
      v35 = IopParentToRawTranslation();
      if ( v35 < 0 )
        break;
      v19 = *(_QWORD *)(v17 + 112);
      v18 = v40[0];
    }
    *(_OWORD *)v16 = *(_OWORD *)v19;
    v16[4] = *(_DWORD *)(v19 + 16);
    if ( *(_DWORD *)(v18 + 128) == 2 )
    {
      v33 = *(_QWORD *)(v18 + 112);
      v13 = Destination[0];
      *(_OWORD *)v14 = *(_OWORD *)v33;
      v32 = *(_DWORD *)(v33 + 16);
      goto LABEL_33;
    }
    v20 = *(_QWORD *)(v17 + 72);
    if ( v20 )
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
    else
      LODWORD(v21) = 0;
    v35 = IopChildToRootTranslation(
            v21,
            *(_DWORD *)v17,
            *(_DWORD *)(v17 + 4),
            *(_DWORD *)(v17 + 80),
            v17 + 136,
            (__int64)&P);
    if ( v35 < 0 )
      break;
    v22 = P;
    *(_OWORD *)v14 = *(_OWORD *)P;
    *(_DWORD *)(v14 + 16) = v22[4];
    ExFreePoolWithTag(v22, 0);
    v13 = Destination[0];
LABEL_17:
    v23 = *(_DWORD *)(v17 + 276);
    v16 += 5;
    v14 += 20LL;
    if ( v23 )
    {
      v24 = (_WORD *)(*(_QWORD *)(v17 + 280) + 8LL);
      v25 = v23;
      do
      {
        *(_BYTE *)v16 = -127;
        *(_BYTE *)v14 = -127;
        *((_BYTE *)v16 + 1) = 1;
        *(_BYTE *)(v14 + 1) = 1;
        v26 = *(v24 - 2);
        *((_WORD *)v16 + 1) = v26;
        *(_WORD *)(v14 + 2) = v26;
        memmove(v16 + 1, v24, 0xCuLL);
        memmove((void *)(v14 + 4), v24, 0xCuLL);
        v24 += 16;
        v16 += 5;
        v14 += 20LL;
        --v25;
      }
      while ( v25 );
      v4 = v41[0];
      v10 = (_DWORD *)Destination[1];
      v13 = Destination[0];
    }
    v7 = (unsigned int)(v37 + 1);
    LODWORD(v37) = v7;
    if ( (unsigned int)v7 >= *(_DWORD *)(v13 + 20) )
      goto LABEL_19;
  }
  ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag(v12, 0);
  LODWORD(v7) = -1073741670;
  if ( v35 == -1073741267 )
    LODWORD(v7) = -1073741267;
  *(_DWORD *)(v4 + 56) = v7;
LABEL_21:
  *(_QWORD *)(v4 + 40) = v3;
  return v7;
}

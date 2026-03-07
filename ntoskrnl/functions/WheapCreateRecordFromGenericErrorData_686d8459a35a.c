__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v6; // r13
  unsigned int v7; // ecx
  _DWORD *v8; // rbx
  unsigned int v9; // r14d
  const char *v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  int v15; // esi
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  bool v22; // cf
  unsigned int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r9
  _DWORD *v28; // rbx
  unsigned int v29; // ebx
  size_t Size; // [rsp+20h] [rbp-81h]
  char v32; // [rsp+30h] [rbp-71h]
  int v33; // [rsp+34h] [rbp-6Dh]
  _DWORD Src[20]; // [rsp+50h] [rbp-51h] BYREF

  v6 = a4;
  memset(Src, 0, 0x48uLL);
  v7 = *(_DWORD *)(a2 + 68);
  v8 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v9 = 20;
  v32 = 0;
  if ( v7 < 0x14 )
  {
    v10 = "Error_Packet_Lenth_Too_Small";
LABEL_49:
    v29 = -1073741811;
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, v10);
LABEL_50:
    Src[3] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 72;
    Src[5] = -2147483627;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 40;
    Src[17] = v29;
    WheaLogInternalEvent(Src);
    return v29;
  }
  v11 = v8[3] + 20;
  if ( v11 < 0x14 )
  {
    v10 = "Overflow_Finding_Structured_Len";
    goto LABEL_49;
  }
  v12 = v8[1];
  if ( v12 && (v13 = v8[2]) != 0 )
  {
    if ( v11 > v12 )
    {
      v10 = "Unstructered_Data_Too_Soon";
      goto LABEL_49;
    }
    v14 = v12 + v13;
    if ( v14 < v12 )
    {
      v10 = "Overflow_Unstructured_End";
      goto LABEL_49;
    }
    if ( v14 > v7 )
    {
      v10 = "Unstructured_Overruns_Buffer";
      goto LABEL_49;
    }
    v15 = 0;
  }
  else
  {
    v15 = 0;
    if ( v11 > v7 )
    {
      v10 = "Error_Overruns_Buffer";
      goto LABEL_49;
    }
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v10 = "Header_Overruns_Buffer";
    goto LABEL_49;
  }
  memset((void *)a3, 0, v6);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v16 = *(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v16;
  v17 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a3 + 20) = v6;
  *(_DWORD *)(a3 + 104) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v17 >> 1)) & 4;
  v33 = (*v8 >> 4) & 0x3FF;
  if ( v33 )
  {
    while ( v9 + 64 >= v9 )
    {
      if ( v9 + 64 > v11 )
      {
        v10 = "Entry_Header_Overruns_Structure";
        goto LABEL_49;
      }
      v18 = (__int64)v8 + v9;
      v19 = *(_DWORD *)(v18 + 24);
      if ( *(_WORD *)(v18 + 20) == 768 )
      {
        v20 = v19 + 72;
        v21 = -1;
        v22 = v20 < 0x48;
      }
      else
      {
        v20 = v19 + 64;
        v21 = -1;
        v22 = v20 < 0x40;
      }
      if ( !v22 )
        v21 = v20;
      if ( v22 )
      {
        v10 = "Overflow_Entry_Length";
        goto LABEL_49;
      }
      v23 = v9 + v21;
      if ( v9 + v21 < v9 )
      {
        v10 = "Overflow_Next_Entry_Offset";
        goto LABEL_49;
      }
      v9 += v21;
      if ( v23 > v11 )
      {
        v10 = "Next_Entry_Overruns_Structure";
        goto LABEL_49;
      }
      v24 = v32;
      if ( (*(_BYTE *)(v18 + 23) & 1) != 0 )
        v24 = 1;
      LODWORD(Size) = v21;
      v32 = v24;
      v15 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v18, Size, 1);
      if ( v15 >= 0
        || (RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "Failed_Add_Section"),
            *(_DWORD *)(a3 + 104) |= 0x40u,
            v32 != 1) )
      {
        ++Src[16];
        if ( --v33 )
          continue;
      }
      goto LABEL_32;
    }
    v10 = "Overflow_Entry_Header_Offset";
    goto LABEL_49;
  }
LABEL_32:
  v25 = (unsigned int)v8[1];
  if ( (_DWORD)v25 && (v26 = v8[2]) != 0 )
  {
    v27 = (__int64)v8 + v25;
    v28 = (_DWORD *)a1;
    LODWORD(Size) = v26;
    v15 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v27, Size, 0);
    if ( v15 < 0 )
    {
      RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, "Failed_Add_Unstructured");
      *(_DWORD *)(a3 + 104) |= 0x40u;
    }
  }
  else
  {
    v28 = (_DWORD *)a1;
  }
  if ( !*(_DWORD *)(a2 + 20) )
    WheapAddRecoveryPacketToErrorRecord(v28, a3, v6);
  v29 = 0;
  if ( v15 < 0 )
    goto LABEL_50;
  return v29;
}

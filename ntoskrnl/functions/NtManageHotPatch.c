__int64 __fastcall NtManageHotPatch(int a1, char *a2, unsigned int a3, unsigned __int64 a4)
{
  _DWORD *v4; // r15
  SIZE_T v5; // r12
  KPROCESSOR_MODE AccessMode; // bl
  NTSTATUS LoadedPatches; // ebx
  __int64 v10; // rsi
  KPROCESSOR_MODE v11; // r14
  __int64 CurrentServerSilo; // rbx
  int v14; // edx
  unsigned int v15; // r15d
  ULONG v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  char *v23; // rcx
  KPROCESSOR_MODE v24; // [rsp+40h] [rbp-118h]
  int v25; // [rsp+44h] [rbp-114h]
  unsigned int Size; // [rsp+58h] [rbp-100h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-FCh]
  unsigned __int64 v29; // [rsp+60h] [rbp-F8h]
  PVOID P; // [rsp+68h] [rbp-F0h]
  PVOID Src; // [rsp+70h] [rbp-E8h]
  PVOID v32; // [rsp+78h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-C8h]
  _QWORD SourceSid[14]; // [rsp+A0h] [rbp-B8h] BYREF

  v4 = (_DWORD *)a4;
  v5 = a3;
  v34 = a4;
  v29 = a4;
  DestinationString = 0LL;
  memset(SourceSid, 0, 0x64uLL);
  P = 0LL;
  Src = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Size = 0;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v24 = AccessMode;
  if ( (qword_140C69500 & 1) == 0 )
  {
    LoadedPatches = -1073741637;
LABEL_3:
    v25 = LoadedPatches;
    v10 = 0x7FFFFFFF0000LL;
LABEL_4:
    v11 = v24;
    goto LABEL_5;
  }
  if ( !byte_140C694F8 )
  {
    LoadedPatches = -1073741661;
    goto LABEL_3;
  }
  if ( a1 != 7 && (unsigned int)(a1 - 8) >= 2 )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, AccessMode) )
    {
      LoadedPatches = -1073741727;
      goto LABEL_3;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo != PdcCreateWatchdogAroundClientCall() )
    {
      LoadedPatches = -1073741790;
      goto LABEL_3;
    }
    AccessMode = v24;
  }
  v14 = 0;
  Size_4 = 0;
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
      {
LABEL_35:
        v15 = 104;
        goto LABEL_45;
      }
      if ( a1 == 1 )
      {
LABEL_32:
        v15 = 80;
LABEL_34:
        v14 = 1;
        v16 = 4;
        Size_4 = 1;
        goto LABEL_46;
      }
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
        {
          if ( a1 == 4 )
            goto LABEL_32;
LABEL_41:
          LoadedPatches = -1073741821;
          goto LABEL_3;
        }
        goto LABEL_35;
      }
    }
    v15 = 96;
    goto LABEL_45;
  }
  switch ( a1 )
  {
    case 6:
      v15 = 40;
      break;
    case 7:
      v14 = 1;
      v15 = 32;
      Size_4 = 1;
      break;
    case 8:
      v15 = 48;
      break;
    case 9:
      v15 = 8;
      goto LABEL_34;
    default:
      goto LABEL_41;
  }
LABEL_45:
  v16 = 8;
LABEL_46:
  if ( (unsigned int)v5 < v15 )
  {
    LoadedPatches = -1073741820;
    v25 = -1073741820;
    v10 = 0x7FFFFFFF0000LL;
LABEL_48:
    v4 = (_DWORD *)a4;
    goto LABEL_4;
  }
  if ( AccessMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    v17 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v17 = a4;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    if ( v14 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v16 - 1) & (unsigned int)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&a2[v5] > 0x7FFFFFFF0000LL || &a2[v5] < a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      ProbeForWrite(a2, v5, v16);
    }
    memmove(SourceSid, a2, v15);
  }
  else
  {
    memmove(SourceSid, a2, v15);
    v10 = 0x7FFFFFFF0000LL;
  }
  if ( a1 <= 5 )
  {
    if ( a1 != 5 )
    {
      if ( !a1 )
        goto LABEL_81;
      if ( a1 == 1 )
        goto LABEL_68;
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
        {
LABEL_68:
          if ( LODWORD(SourceSid[0]) == 1 )
          {
            if ( a1 != 4 )
            {
              v18 = MiUnloadHotPatch(HIDWORD(SourceSid[0]), LODWORD(SourceSid[1]));
              goto LABEL_77;
            }
            if ( RtlValidSid((char *)&SourceSid[1] + 4) )
            {
              v18 = MiUnloadHotPatchForUserSid((char *)&SourceSid[1] + 4, (char *)SourceSid + 4);
LABEL_77:
              LoadedPatches = v18;
              v19 = v18;
LABEL_79:
              v25 = v18;
              MiLogHotPatchManagement((unsigned int)a1, SourceSid, 0LL, v19);
LABEL_80:
              v20 = 0LL;
              goto LABEL_119;
            }
            goto LABEL_75;
          }
          goto LABEL_72;
        }
LABEL_81:
        if ( LODWORD(SourceSid[0]) == 2 && LOWORD(SourceSid[1]) )
        {
          if ( AccessMode )
          {
            if ( (SourceSid[2] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = SourceSid[2] + LOWORD(SourceSid[1]);
            if ( v21 > 0x7FFFFFFF0000LL || v21 < SourceSid[2] )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          LoadedPatches = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)&SourceSid[1], &DestinationString);
          v25 = LoadedPatches;
          if ( LoadedPatches < 0 )
            goto LABEL_48;
          if ( a1 != 3 )
          {
            v22 = MiLoadHotPatch(&DestinationString, 1LL, (char *)&SourceSid[11] + 4, &SourceSid[12]);
            goto LABEL_94;
          }
          if ( RtlValidSid(&SourceSid[3]) )
          {
            v22 = MiLoadHotPatchForUserSid(&DestinationString, &SourceSid[3], (char *)&SourceSid[11] + 4);
LABEL_94:
            v25 = v22;
            LoadedPatches = v22;
            MiLogHotPatchManagement((unsigned int)a1, SourceSid, &DestinationString, v22);
            v20 = SourceSid;
            Size = v15;
            goto LABEL_119;
          }
LABEL_75:
          LoadedPatches = -1073741704;
          goto LABEL_74;
        }
        goto LABEL_72;
      }
    }
    if ( LODWORD(SourceSid[0]) != 2 )
      goto LABEL_72;
    v23 = 0LL;
    if ( a1 == 5 )
    {
      if ( !RtlValidSid((char *)SourceSid + 4) )
        goto LABEL_75;
      v23 = (char *)SourceSid + 4;
    }
    LoadedPatches = MiQueryLoadedPatches(v23, v5);
    v25 = LoadedPatches;
    if ( LoadedPatches < 0 )
      goto LABEL_48;
    if ( Size <= (unsigned int)v5 )
    {
      v20 = P;
      goto LABEL_119;
    }
LABEL_73:
    LoadedPatches = -1073741789;
    goto LABEL_74;
  }
  switch ( a1 )
  {
    case 6:
      if ( LODWORD(SourceSid[0]) != 3 && (LODWORD(SourceSid[0]) < 2 || LODWORD(SourceSid[0]) > 3) )
        goto LABEL_72;
      LoadedPatches = MiQueryProcessActivePatches((HANDLE)SourceSid[1], v5, AccessMode, SourceSid[0]);
      v25 = LoadedPatches;
      if ( LoadedPatches < 0 )
        goto LABEL_48;
      if ( Size > (unsigned int)v5 )
        goto LABEL_73;
      v20 = Src;
      break;
    case 7:
      v18 = MiApplyImageHotPatchRequest(SourceSid);
      LoadedPatches = v18;
      v19 = v18;
      goto LABEL_79;
    case 8:
      if ( LODWORD(SourceSid[0]) != 1 || SourceSid[1] != -1LL || LODWORD(SourceSid[3]) )
      {
LABEL_72:
        LoadedPatches = -1073741811;
LABEL_74:
        v25 = LoadedPatches;
        goto LABEL_48;
      }
      LoadedPatches = MiQuerySingleLoadedPatch(
                        (unsigned int)&v32,
                        (unsigned int)&Size,
                        (unsigned int)&SourceSid[2],
                        0,
                        (__int64)a2,
                        v5);
      v25 = LoadedPatches;
      if ( LoadedPatches < 0 )
      {
        v11 = v24;
        goto LABEL_124;
      }
      if ( Size > (unsigned int)v5 )
        goto LABEL_73;
      v20 = v32;
      break;
    default:
      if ( SourceSid[0] == 1LL )
      {
        LoadedPatches = 0;
        v25 = 0;
        goto LABEL_80;
      }
      goto LABEL_72;
  }
LABEL_119:
  v11 = v24;
  if ( !Size_4 )
  {
    if ( v24 )
    {
      memmove(a2, v20, Size);
      v4 = (_DWORD *)a4;
      goto LABEL_5;
    }
    memmove(a2, v20, Size);
  }
LABEL_124:
  v4 = (_DWORD *)a4;
LABEL_5:
  if ( v11 )
  {
    if ( (unsigned __int64)v4 < 0x7FFFFFFF0000LL )
      v10 = v34;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    *v4 = Size;
    LoadedPatches = v25;
  }
  else
  {
    *v4 = Size;
  }
  RtlFreeUnicodeString(&DestinationString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  return (unsigned int)LoadedPatches;
}

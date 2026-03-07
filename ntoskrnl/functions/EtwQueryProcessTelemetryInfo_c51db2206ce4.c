__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *Address,
        SIZE_T Length,
        char a4,
        ULONG *a5)
{
  SIZE_T v5; // r15
  int v8; // ebx
  __int64 *v9; // rcx
  ULONG_PTR v10; // r12
  int v11; // edi
  ULONG v12; // edi
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  ULONG Size; // [rsp+24h] [rbp-2A4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2A0h]
  int v26; // [rsp+2Ch] [rbp-29Ch] BYREF
  __int64 v27; // [rsp+30h] [rbp-298h] BYREF
  const void **v28; // [rsp+38h] [rbp-290h]
  PVOID P[2]; // [rsp+40h] [rbp-288h] BYREF
  ULONG_PTR v30; // [rsp+50h] [rbp-278h]
  __int64 v31; // [rsp+58h] [rbp-270h]
  size_t v32[52]; // [rsp+60h] [rbp-268h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v33; // [rsp+200h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v31 = BugCheckParameter1;
  memset(&v33, 0, sizeof(v33));
  memset(v32, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  Size = 0;
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v27 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v28 = (const void **)v9;
  v10 = PsReferencePrimaryTokenWithTag(BugCheckParameter1, 0x746C6644u);
  v30 = v10;
  v26 = 0;
  EtwpQueryTokenPackageInfo(v10, v32, &v26);
  v11 = SeQueryUserSidToken(v10, Src, 0x44u, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v33);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v27);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess(&v33);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v27;
    }
    v12 = Size + 100 + LODWORD(v32[0]) + LODWORD(v32[1]) + *(unsigned __int16 *)v28 + LOWORD(P[0]);
    if ( a5 )
      *a5 = v12;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    v13 = (unsigned int)v5;
    if ( v12 < (unsigned int)v5 )
      v13 = v12;
    memset(Address, 0, v13);
    if ( (unsigned int)v5 < 0x60 )
    {
      v11 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)Address = 96;
      *((_DWORD *)Address + 1) = *(_DWORD *)(BugCheckParameter1 + 1088);
      *((_QWORD *)Address + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)Address + 2) = *(_QWORD *)(BugCheckParameter1 + 1128);
      *((_QWORD *)Address + 3) = *(_QWORD *)(BugCheckParameter1 + 2304);
      *((_QWORD *)Address + 4) = *(_QWORD *)(BugCheckParameter1 + 2312);
      *((_QWORD *)Address + 5) = *(_QWORD *)(BugCheckParameter1 + 2296);
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime(v14);
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(v15);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v27);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)Address + 18) = 96;
        v16 = Size;
        memmove(Address + 96, Src, Size);
        v17 = &Address[v16 + 96];
        *((_DWORD *)Address + 19) = v16 + 96;
        v18 = (unsigned __int16 *)v28;
        memmove(v17, v28[1], *(unsigned __int16 *)v28);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)Address + 20) = (_DWORD)v19 - (_DWORD)Address;
        memmove(v19, &v32[2], v32[0]);
        v20 = &v19[v32[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v20 - (_DWORD)Address;
        memmove(v20, &v32[34], v32[1]);
        v21 = &v20[v32[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v21 - (_DWORD)Address;
        memmove(v21, P[1], LOWORD(P[0]));
        v11 = 0;
      }
      else
      {
        v11 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v10, 0x746C6644u);
  return (unsigned int)v11;
}

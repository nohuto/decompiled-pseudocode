__int64 __fastcall KiAllocatePrcbThread(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PCUNICODE_STRING SourceString,
        int a7)
{
  unsigned int v7; // r14d
  unsigned int v10; // r15d
  int inited; // ebx
  char *v12; // rdi
  __int64 v13; // rcx
  PCUNICODE_STRING v14; // rbx
  __int64 Pool2; // rax
  __int64 v16; // rcx
  unsigned __int16 Length; // ax
  bool v18; // zf
  _QWORD v20[4]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v21; // [rsp+78h] [rbp-11h]
  void *v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+94h] [rbp+Bh]
  int v25; // [rsp+9Ch] [rbp+13h]
  PVOID Object; // [rsp+F0h] [rbp+67h] BYREF

  v7 = (unsigned __int16)KiMaximumGroups;
  v10 = 8 * (unsigned __int16)KiMaximumGroups + 8;
  Object = 0LL;
  inited = ObCreateObject(0, (_DWORD)PsThreadType, 0, 0, 0, 2 * v10 + 2320, 0, 2320, (__int64)&Object);
  if ( inited < 0 )
  {
    v12 = (char *)Object;
  }
  else
  {
    v12 = (char *)Object;
    memset(Object, 0, 0x910uLL);
    *((_QWORD *)v12 + 72) = v12 + 2320;
    *((_QWORD *)v12 + 69) = &v12[v10 + 2320];
    *((_WORD *)v12 + 1160) = 1;
    *((_WORD *)v12 + 1161) = v7;
    *((_DWORD *)v12 + 581) = 0;
    memset(v12 + 2328, 0, 8LL * v7);
    v13 = *((_QWORD *)v12 + 69);
    *(_WORD *)v13 = 1;
    *(_WORD *)(v13 + 2) = v7;
    *(_DWORD *)(v13 + 4) = 0;
    memset((void *)(v13 + 8), 0, 8LL * v7);
    *((_DWORD *)v12 + 257) = 32;
    *((_QWORD *)v12 + 183) = v12 + 1456;
    *((_QWORD *)v12 + 182) = v12 + 1456;
    v20[0] = 0LL;
    *((_QWORD *)v12 + 185) = v12 + 1472;
    *((_QWORD *)v12 + 184) = v12 + 1472;
    *((_QWORD *)v12 + 186) = 0LL;
    *((_QWORD *)v12 + 208) = v12 + 1656;
    *((_QWORD *)v12 + 207) = v12 + 1656;
    *((_QWORD *)v12 + 211) = v12 + 1680;
    *((_QWORD *)v12 + 210) = v12 + 1680;
    v21 = 0LL;
    v23 = a5 + 1;
    v22 = &KiInitialProcess;
    v25 = 0;
    v24 = a7 | 2u;
    v20[1] = a2;
    v20[2] = 0LL;
    v20[3] = 0LL;
    inited = KeInitThread(v12, v20);
    if ( inited >= 0 )
    {
      v14 = SourceString;
      Pool2 = ExAllocatePool2(64LL, SourceString->Length + 16LL, 1833855060LL);
      *((_QWORD *)v12 + 204) = Pool2;
      v16 = Pool2;
      if ( Pool2 )
      {
        Length = v14->Length;
        *(_OWORD *)v16 = 0LL;
        *(_WORD *)(v16 + 2) = Length;
        *(_QWORD *)(v16 + 8) = v16 + 16;
        RtlUnicodeStringCopy(*((PUNICODE_STRING *)v12 + 204), v14);
        v18 = KiSchedulerAssistThreadFlagEnabled == 0;
        *((_QWORD *)v12 + 148) = a2;
        *((_QWORD *)v12 + 164) = a2;
        if ( !v18 )
        {
          _interlockedbittestandset((volatile signed __int32 *)v12, 0x16u);
          v12 = (char *)Object;
        }
        if ( PopEnergyEstimationEnabled )
        {
          _interlockedbittestandset((volatile signed __int32 *)v12, 0x15u);
          v12 = (char *)Object;
        }
        *a1 = v12;
        inited = 0;
        v12 = 0LL;
      }
      else
      {
        inited = -1073741801;
      }
    }
  }
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  return (unsigned int)inited;
}

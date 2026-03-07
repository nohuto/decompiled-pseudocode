__int64 __fastcall HalpAcpiFindRsdp(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 ConfigurationNextEntry; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned int v11; // r14d
  void *Memory; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = HalpAcpiMultiNode;
  v3 = 0;
  v14 = 0LL;
  if ( HalpAcpiMultiNode )
  {
LABEL_8:
    *a2 = v2;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 176);
    v15 = 0LL;
    v7 = &v15;
    while ( 1 )
    {
      ConfigurationNextEntry = KeFindConfigurationNextEntry(v6, 3, 12, 0, (__int64)v7);
      v9 = ConfigurationNextEntry;
      if ( !ConfigurationNextEntry )
      {
        DbgPrint("**** HalpAcpiFindRsdp: Could not find RSDP\n");
        return (unsigned int)-1073741275;
      }
      if ( !strcmp(*(const char **)(ConfigurationNextEntry + 56), "ACPI BIOS") )
        break;
      v6 = *(_QWORD *)(a1 + 176);
      v7 = &v14;
      v14 = v9;
    }
    v10 = *(_QWORD *)(v9 + 64);
    v11 = 24 * *(_DWORD *)(v10 + 36) + 16;
    Memory = (void *)HalpAcpiAllocateMemory(a1, v11);
    HalpAcpiMultiNode = (__int64)Memory;
    v2 = (__int64)Memory;
    if ( Memory )
    {
      memmove(Memory, (const void *)(v10 + 28), v11);
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
  return v3;
}

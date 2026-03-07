void __fastcall RIMFreeUserMem(struct _RTL_AVL_TABLE *a1, void *a2)
{
  struct _RTL_AVL_TABLE *v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  PVOID Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    BaseAddress = a2;
    v2 = a1 + 9;
    Buffer = a2;
    v6 = 0LL;
    v3 = RtlLookupElementGenericTableAvl(a1 + 9, &Buffer);
    if ( v3 )
    {
      v4 = (void *)v3[2];
      RegionSize = v3[1];
      MmUnsecureVirtualMemory(v4);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      Buffer = BaseAddress;
      RtlDeleteElementGenericTableAvl(v2, &Buffer);
    }
  }
}

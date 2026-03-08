/*
 * XREFs of CmpCreateRegistryRoot @ 0x140B5131C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObCreateObject @ 0x140709D30 (ObCreateObject.c)
 *     EnlistKeyBodyWithKCB @ 0x14076EC30 (EnlistKeyBodyWithKCB.c)
 *     CmpTryToLockKcbExclusive @ 0x140790CD8 (CmpTryToLockKcbExclusive.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpCreateRootNode @ 0x140B52778 (CmpCreateRootNode.c)
 */

__int64 __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  int inserted; // edi
  ACL *v3; // rbx
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-29h]
  int v10; // [rsp+38h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  UNICODE_STRING *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  ACL *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  PVOID v19; // [rsp+C0h] [rbp+67h] BYREF
  ULONG_PTR v20; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h]
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  Object = 0LL;
  v12[1] = 0;
  v16 = 0;
  v20 = 0LL;
  LODWORD(v19) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  inserted = CmpCreateRootNode(a1, a2, &v19);
  if ( inserted >= 0 )
  {
    v3 = CmpHiveRootSecurityDescriptor();
    v12[0] = 48;
    v13 = 0LL;
    v14 = &CmRegistryRootName;
    v15 = 576;
    v17 = v3;
    v18 = 0LL;
    inserted = ObCreateObject(0, (int)CmKeyObjectType, (int)v12, 0);
    ExFreePoolWithTag(v3, 0);
    if ( inserted >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v10 = 0;
      v9 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      inserted = CmpCreateKeyControlBlock(
                   CmpMasterHive,
                   (int)v19,
                   0LL,
                   0LL,
                   0,
                   &DestinationString.Length,
                   v9,
                   v10,
                   &v20);
      if ( inserted >= 0 )
      {
        v4 = Object;
        v5 = v20;
        *(_DWORD *)Object = 1803104306;
        v4[1] = v5;
        v4[2] = 0LL;
        v6 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v7 = v20;
        v6[12] = 0;
        *((_QWORD *)v6 + 10) = v6 + 18;
        *((_QWORD *)v6 + 9) = v6 + 18;
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        CmpTryToLockKcbExclusive(v7);
        EnlistKeyBodyWithKCB((signed __int64)v6, 2);
        CmpUnlockKcb(v20);
        inserted = ObInsertObject(v6, 0LL, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          v19 = 0LL;
          inserted = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v19, 0LL);
          CmpRegistryRootObject = v19;
          if ( inserted < 0 )
            ObCloseHandle(Handle, 0);
          else
            return 0;
        }
      }
    }
  }
  return (unsigned int)inserted;
}

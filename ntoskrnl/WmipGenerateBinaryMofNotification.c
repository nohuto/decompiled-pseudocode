/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x14084FEDC
 * Callers:
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x14087DEB0 (WmipDSCleanup.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r15
  char *Pool2; // rax
  char *v10; // rdi
  size_t v11; // rbp
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v14 = -1LL;
        v8 = v4;
        do
          ++v14;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v14) );
        v7 = 2 * v14 + 4;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v6 + 4) );
        v7 = 2 * v6 + 14;
        v8 = v4;
      }
      Pool2 = (char *)ExAllocatePool2(256LL, v7 + 74, 1885957463LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, v7 + 74);
        *(_DWORD *)v10 = v7 + 74;
        *((_DWORD *)v10 + 1) = 3;
        *((_QWORD *)v10 + 1) = 1LL;
        *((_DWORD *)v10 + 11) = 10;
        *(_OWORD *)(v10 + 24) = *a2;
        *((_QWORD *)v10 + 2) = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v10 + 15) = v7 + 2;
        v11 = v7 - 2;
        *((_DWORD *)v10 + 12) = 64;
        *((_DWORD *)v10 + 14) = 72;
        *((_WORD *)v10 + 32) = 0;
        *((_WORD *)v10 + 36) = 0;
        v12 = *(_DWORD *)(a1 + 16);
        if ( (v12 & 2) != 0 )
        {
          *((_WORD *)v10 + 37) = v11;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v10 + 38, v11, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 88) + 8 * v8));
        }
        else if ( (v12 & 1) != 0 )
        {
          v13 = *(_DWORD **)(a1 + 88);
          LODWORD(v15) = v4 + *v13;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v10 + 38, v11, 0LL, 0LL, 0x200u, L"%ws%d", v13 + 1, v15);
          *((_WORD *)v10 + 37) = v11;
        }
        WmipProcessEvent(v10);
        ExFreePoolWithTag(v10, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}

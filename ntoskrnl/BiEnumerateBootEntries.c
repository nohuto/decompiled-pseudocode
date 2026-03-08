/*
 * XREFs of BiEnumerateBootEntries @ 0x140830608
 * Callers:
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x140413FB0 (ZwEnumerateBootEntries.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, unsigned int *a2)
{
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // rdi
  int v7; // eax
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v10);
  if ( v4 >= 0 )
  {
    v9 = 0x2000;
    Pool2 = ExAllocatePool2(258LL, 0x2000LL, 1262764866LL);
    v6 = (void *)Pool2;
    v9 &= -(Pool2 != 0);
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(Pool2, (__int64)&v9);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      Pool2 = ExAllocatePool2(258LL, v9, 1262764866LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741670;
        goto LABEL_6;
      }
    }
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to enumerate boot entries. Status: %x", (unsigned int)v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    else
    {
      *a2 = v9;
      *a1 = v6;
    }
LABEL_6:
    BiReleasePrivilege((unsigned int *)&v10);
  }
  return (unsigned int)v4;
}

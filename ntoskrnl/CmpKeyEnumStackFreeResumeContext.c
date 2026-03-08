/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x140A21354
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407AF9B0 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, __int64 a2, char a3)
{
  ULONG *p_Attributes; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v7 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v8 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a3 )
          CmpDelayDerefKeyControlBlock(v8, a2);
        else
          CmpDereferenceKeyControlBlock(v8);
      }
      p_Attributes += 6;
      --v7;
    }
    while ( v7 );
  }
  CmSiFreeMemory(Privileges);
}

/*
 * XREFs of ?ProtectSection@SipcPort@@QEAAJPEAX_K1@Z @ 0x1800C1710
 * Callers:
 *     ?ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z @ 0x1800C16D0 (-ProtectBuffer@SipcEndpoint@@UEAAJPEAX_K1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800C08D0 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 */

__int64 __fastcall SipcPort::ProtectSection(SipcPort *this, void *a2, __int64 a3, unsigned __int64 a4)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r11
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  if ( SectionListEntry )
  {
    v9 = *((_QWORD *)SectionListEntry + 5);
    if ( v7 < v9 && a4 <= v9 - v7 )
      return SipcPort::ProtectSectionMemory((void *)(v6 + v7), a4, 2u);
    v8 = -2147483637;
  }
  else
  {
    v8 = -2147024809;
  }
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v8);
  return v8;
}

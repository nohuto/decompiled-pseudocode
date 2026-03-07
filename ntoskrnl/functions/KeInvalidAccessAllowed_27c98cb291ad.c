char __fastcall KeInvalidAccessAllowed(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char IsTraceMemoryAccess; // r11
  __int16 v7; // ax
  void *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  IsTraceMemoryAccess = 0;
  if ( !a1 )
    return 0;
  v7 = *(_WORD *)(a1 + 368);
  if ( v7 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0
      || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(a1 + 384), a3, a4)
      && !(unsigned int)KiRspInIstStack(2LL, v10, v11, v12) )
    {
      v8 = &ExpInterlockedPopEntrySListFault;
      IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(a1 + 360));
      goto LABEL_5;
    }
    return 0;
  }
  if ( v7 != 51 )
    return 0;
  v8 = (void *)qword_140D1F370;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v8 )
    return 1;
  return IsTraceMemoryAccess;
}

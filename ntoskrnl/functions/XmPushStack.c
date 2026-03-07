__int64 __fastcall XmPushStack(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 120);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - v2 - 1);
  if ( (unsigned int)v5 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v2 )
    longjmp((_JBTYPE *)(a1 + 160), 15);
  *(_DWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 88) = x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 60), v5);
  return XmStoreResult(a1, a2);
}

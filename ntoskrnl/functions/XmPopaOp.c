__int64 __fastcall XmPopaOp(__int64 a1)
{
  unsigned int v2; // edi
  int *v3; // rdx
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 8;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v6 = *(_DWORD *)(a1 + 40);
  do
  {
    if ( --v2 == 4 )
      v3 = &v6;
    else
      v3 = (int *)(a1 + 4 * (v2 + 6LL));
    XmSetDestinationValue(a1, v3);
    v4 = XmPopStack(a1);
    result = XmStoreResult(a1, v4);
  }
  while ( v2 );
  return result;
}

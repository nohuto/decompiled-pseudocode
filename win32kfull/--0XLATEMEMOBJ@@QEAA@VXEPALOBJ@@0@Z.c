XLATE **__fastcall XLATEMEMOBJ::XLATEMEMOBJ(XLATE **a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  struct XLATE *Xlate; // rax
  unsigned int v8; // ecx
  XLATE *i; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v4 = 0;
  *a1 = 0LL;
  Xlate = pCreateXlate(*(_DWORD *)(a2 + 28));
  *a1 = Xlate;
  if ( Xlate )
  {
    *((_QWORD *)Xlate + 5) = a2;
    v8 = 0;
    *((_QWORD *)*a1 + 6) = a2;
    *((_QWORD *)*a1 + 7) = a3;
    for ( i = *a1; v8 < *((_DWORD *)*a1 + 3); ++v8 )
      *((_DWORD *)i + v8 + 21) = v8;
    v10 = *(_QWORD *)(a3 + 88);
    v11 = *(_QWORD *)(a3 + 80);
    if ( *(_DWORD *)(a3 + 28) )
    {
      do
      {
        v12 = v4++;
        *((_DWORD *)i + *(unsigned __int8 *)(v12 + v10 + 4) + 21) = *(unsigned __int8 *)(v12 + v11 + 4);
      }
      while ( v4 < *(_DWORD *)(a3 + 28) );
    }
    XLATE::vCheckForTrivial(*a1);
  }
  return a1;
}

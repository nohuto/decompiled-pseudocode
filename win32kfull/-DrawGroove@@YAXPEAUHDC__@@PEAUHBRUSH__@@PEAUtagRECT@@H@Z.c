void __fastcall DrawGroove(HDC a1, HBRUSH a2, struct tagRECT *a3)
{
  HDC v4; // rdi
  const RECT *v5; // rdx
  RECT v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  if ( a2 == *(HBRUSH *)(gpsi + 4856LL) || a2 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    v5 = a3;
  }
  else
  {
    v6 = *a3;
    DrawEdge(a1);
    v5 = &v6;
    a1 = v4;
  }
  FillRect(a1, v5, a2);
}

char __fastcall CDropShadow::IsEmptyDrawing(CDropShadow *this)
{
  char v1; // bl
  bool v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( !CDropShadow::IsReadyToDraw(this, 0LL, &v3) || v3 )
    return 1;
  return v1;
}

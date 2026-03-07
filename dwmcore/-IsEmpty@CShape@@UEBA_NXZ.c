bool __fastcall CShape::IsEmpty(CShape *this)
{
  __int64 v1; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0LL;
  (*(void (__fastcall **)(CShape *, __int128 *, _QWORD))(v1 + 48))(this, &v3, 0LL);
  return *((float *)&v3 + 2) <= *(float *)&v3 || *((float *)&v3 + 3) <= *((float *)&v3 + 1);
}

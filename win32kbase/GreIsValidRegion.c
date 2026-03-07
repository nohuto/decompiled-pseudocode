_BOOL8 __fastcall GreIsValidRegion(HRGN a1)
{
  BOOL v1; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 1, 0);
  v1 = v3[0] != 0LL;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}

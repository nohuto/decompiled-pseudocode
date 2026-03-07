bool __fastcall AuthzBasepSupportSetOperation(int a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int8)(a1 + 0x80) <= 0x22u && (v1 = 0x7000FDFC3LL, _bittest64(&v1, (unsigned int)(a1 - 128)))
        || (_BYTE)a1 == 0x8D;
  return result;
}

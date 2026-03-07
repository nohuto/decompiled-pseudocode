_QWORD *__fastcall MiApplyCompressedFixups(
        ULONG_PTR BugCheckParameter2,
        _QWORD *BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // di
  _QWORD *result; // rax
  char v8; // r10
  unsigned __int8 *BugCheckParameter4; // rbx
  int v10; // edx
  unsigned int v11; // edx
  __int16 v12; // cx

  v6 = 4;
  result = BugCheckParameter3;
  v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL) + 64LL) & 0xF;
  BugCheckParameter4 = (unsigned __int8 *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  while ( 1 )
  {
    v10 = *BugCheckParameter4++;
    if ( (v10 & 0xF0) == 0xF0 )
      break;
    if ( (_BYTE)v10 != 0xEF )
    {
      if ( (unsigned __int8)v10 >= 0xEBu )
      {
        v11 = 239 - v10;
        goto LABEL_7;
      }
      v6 = v10;
      goto LABEL_6;
    }
    v11 = *BugCheckParameter4;
    if ( v11 <= 4 )
      KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    ++BugCheckParameter4;
    do
    {
LABEL_7:
      result = (_QWORD *)((char *)result + v6);
      if ( result >= BugCheckParameter3 + 512 )
        KeBugCheckEx(0x1Au, 0x31uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      if ( v8 == 10 )
      {
        if ( ((unsigned __int16)result & 0xFFFu) <= 0xFF8 )
          *result += a4;
      }
      else if ( v8 == 3 && ((unsigned __int16)result & 0xFFFu) <= 0xFFC )
      {
        *(_DWORD *)result += a4;
      }
      --v11;
    }
    while ( v11 );
  }
  v12 = *BugCheckParameter4;
  if ( (_BYTE)v12 )
  {
    v6 = (16 * v12) | v10 & 0xFF0F;
    ++BugCheckParameter4;
LABEL_6:
    v11 = 1;
    goto LABEL_7;
  }
  return result;
}

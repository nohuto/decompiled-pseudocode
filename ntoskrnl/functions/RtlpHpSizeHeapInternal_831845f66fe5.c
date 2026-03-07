__int64 __fastcall RtlpHpSizeHeapInternal(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned __int64 v11; // rax
  int v12; // r9d
  int v13; // r11d

  if ( (_WORD)a2 )
  {
    v9 = 0;
  }
  else
  {
    v8 = RtlCSparseBitmapBitmaskRead((__int64)&unk_140C70D90, 2 * ((a2 - qword_140C70D88) >> 20));
    if ( !v8 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
    v9 = v8 - 1;
    if ( v9 == 2 )
      return RtlpHpLargeAllocSize(a1, a2, a3, a4);
  }
  v11 = RtlpHpSegDescriptorValidate(192LL * v9 + a1 + 320, a2);
  if ( v11 )
    return RtlpHpSegSizeInternal(v13 + (int)a1 + 320, v11, a2, v12, a4);
  else
    return -1LL;
}

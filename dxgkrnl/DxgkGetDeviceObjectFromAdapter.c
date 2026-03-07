__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3)
{
  struct DXGADAPTER *v4; // rdi
  void *v5; // rcx
  unsigned int v6; // ebx
  struct DXGADAPTER *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v8[0] = 0LL;
  if ( a1 && (DXGADAPTER_REFERENCE::AssignByHandle(v8, a1), (v4 = v8[0]) != 0LL) )
  {
    v10 = v8[0];
    v11 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    v5 = (void *)*((_QWORD *)v4 + 27);
    *a3 = v5;
    if ( v5 )
    {
      ObfReferenceObject(v5);
      v6 = 0;
    }
    else
    {
      v6 = -1073741130;
      WdLogSingleEntry2(3LL, v4, -1073741130LL);
    }
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  }
  else
  {
    v6 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v8, 0LL);
  return v6;
}

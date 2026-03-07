__int64 __fastcall Isoch_CalculateBytesTransferred(int a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  int v7; // eax
  _QWORD *v8; // rsi
  int v10; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  v5 = *(_QWORD **)(a2 + 112);
  v7 = *(_DWORD *)(a2 + 120);
  if ( v5 != *(_QWORD **)(a2 + 96) )
  {
    v8 = (_QWORD *)(a2 + 24);
    while ( v5 != v8 )
    {
      if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v5, v7, (__int64)&v10, (__int64)&v11) )
        goto LABEL_7;
      v5 = (_QWORD *)*v5;
      v7 = 0;
    }
  }
  v5 = *(_QWORD **)(a2 + 96);
  if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v5, v7, (__int64)&v10, (__int64)&v11) )
  {
LABEL_7:
    *(_DWORD *)(a2 + 120) = v10;
    *(_QWORD *)(a2 + 112) = v5;
  }
  return v11;
}

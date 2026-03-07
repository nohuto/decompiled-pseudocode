void __fastcall Feedback::PointerEventIntToDigitizerContactInfo(
        Feedback *this,
        const struct tagPOINTEREVENTINT *a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax

  v7 = 0;
  *(_DWORD *)a5 = *((_DWORD *)this + 3);
  *(_QWORD *)(a5 + 4) = *((_QWORD *)this + 5);
  *(_DWORD *)(a5 + 36) = 0;
  *(_OWORD *)(a5 + 12) = *(_OWORD *)&gZero;
  if ( (_DWORD)a2 )
  {
    v7 = 128;
    *(_DWORD *)(a5 + 36) = 128;
  }
  v8 = *((_DWORD *)this + 2);
  if ( v8 == 2 )
  {
    *(_DWORD *)(a5 + 28) = 1;
    if ( (*((_DWORD *)this + 26) & 1) != 0 )
      *(_OWORD *)(a5 + 12) = *((_OWORD *)this + 7);
  }
  else if ( v8 == 3 )
  {
    *(_DWORD *)(a5 + 28) = 2;
    v9 = v7;
    if ( a3 && (*((_DWORD *)this + 26) & 1) != 0 )
    {
      v9 = v7 | 0x20;
      *(_DWORD *)(a5 + 36) = v7 | 0x20;
    }
    if ( (*((_DWORD *)this + 26) & 4) != 0 )
      *(_DWORD *)(a5 + 36) = v9 | 0x40;
  }
  v10 = *((_DWORD *)this + 5);
  if ( (v10 & 4) != 0 )
    v11 = (a4 != 0) + 2;
  else
    v11 = ~(_BYTE)v10 & 2 | 1;
  *(_DWORD *)(a5 + 32) = v11;
  if ( *(_DWORD *)UPDWORDPointer(8236LL) )
  {
    if ( (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 1u;
    if ( (_GetAsyncKeyState(17LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 2u;
    if ( (_GetAsyncKeyState(164LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 4u;
    if ( (_GetAsyncKeyState(165LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 0x10u;
    if ( (_GetAsyncKeyState(91LL) & 0x8000u) != 0LL || (_GetAsyncKeyState(92LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 8u;
  }
}

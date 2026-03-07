__int64 __fastcall BasicTargetingWindowHitTest(
        const struct tagWND *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        int a10)
{
  int v10; // edi
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rbx
  __int64 result; // rax
  unsigned __int16 v19; // [rsp+90h] [rbp+18h] BYREF

  v10 = 0;
  v19 = 0;
  if ( !(unsigned int)IsCompositionInputWindow(a1) || (v15 = 1, (*(_DWORD *)(a3 + 36) & 8) == 0) )
    v15 = 0;
  v16 = BasicTargetingHitTest(
          (__int64)a1,
          *(_QWORD *)(a3 + 40),
          a2,
          &v19,
          a8,
          *(_DWORD *)(a3 + 84),
          a5,
          a9,
          *(_DWORD *)(a3 + 88) == 1,
          a10,
          v15);
  v17 = a7;
  *a7 = v19;
  if ( v16 )
  {
    if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(a1) || (*(_DWORD *)(a3 + 36) & 1) == 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
    {
      *a6 = 1;
LABEL_9:
      result = 1LL;
      LOBYTE(v10) = *v17 == 0;
      *a4 = v10;
      return result;
    }
  }
  return 0LL;
}

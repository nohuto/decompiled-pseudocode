__int16 __fastcall SmmInitializePhysicalObject(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  BOOL v8; // eax
  _QWORD *v9; // rax

  *(_DWORD *)(a1 + 40) = 1;
  v8 = ((a2 - 2) & 0xFFFFFFFC) == 0 && a2 != 4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = *a4;
  *(_QWORD *)(a1 + 16) = a7;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 44) = v8 | (2 * (a2 & 0xF | ((a6 | (2 * (a5 & 3))) << 8))) | (32 * (a8 & 0xF));
  if ( !v8 )
    *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  v9 = *(_QWORD **)(a1 + 24);
  if ( v9 )
  {
    v9[1] = v9;
    *v9 = v9;
    LOWORD(v9) = RtlCaptureStackBackTrace(4u, 0x10u, (PVOID *)(*(_QWORD *)(a1 + 24) + 16LL), 0LL);
  }
  return (__int16)v9;
}

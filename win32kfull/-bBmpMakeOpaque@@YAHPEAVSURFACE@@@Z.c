__int64 __fastcall bBmpMakeOpaque(struct SURFACE *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    *((_DWORD *)a1 + 138) = 0;
    *((_DWORD *)a1 + 139) = *((_DWORD *)a1 + 28);
    *((_QWORD *)a1 + 68) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    v3 = SGDGetSessionState(a1);
    SURFACE::hdev(a1, *(HDEV *)(*(_QWORD *)(v3 + 32) + 8608LL));
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 28) & 0xFFFC5A10 | 0x385EF;
    return 1LL;
  }
  return result;
}

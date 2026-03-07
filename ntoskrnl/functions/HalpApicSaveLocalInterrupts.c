__int64 __fastcall HalpApicSaveLocalInterrupts(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // rdi
  int v4; // ebx

  v2 = 0;
  v3 = (_DWORD *)(a2 + 64);
  do
  {
    v4 = 16 * v2;
    *(v3 - 16) = ((__int64 (__fastcall *)(_QWORD))HalpApicRead)(16 * v2 + 512);
    *(v3 - 8) = ((__int64 (__fastcall *)(_QWORD))HalpApicRead)(16 * v2++ + 256);
    *v3++ = ((__int64 (__fastcall *)(_QWORD))HalpApicRead)((unsigned int)(v4 + 384));
  }
  while ( v2 < 8 );
  return 0LL;
}

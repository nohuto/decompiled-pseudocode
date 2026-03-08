/*
 * XREFs of ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00379AC
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EqualMsg(struct tagQMSG *a1, struct tagQMSG *a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( *((_QWORD *)a1 + 2) == *((_QWORD *)a2 + 2) )
  {
    v2 = *((_DWORD *)a1 + 6);
    if ( v2 == *((_DWORD *)a2 + 6)
      && (v2 == 512 || *((_QWORD *)a1 + 13) == *((_QWORD *)a2 + 13) && *((_DWORD *)a1 + 12) == *((_DWORD *)a2 + 12)) )
    {
      return 1;
    }
  }
  return result;
}

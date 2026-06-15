/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180016910
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180029840 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  float v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 45), *((_DWORD *)this + 44), &v2) )
    return FLOAT_1_0;
  else
    return v2;
}

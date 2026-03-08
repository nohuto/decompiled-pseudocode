/*
 * XREFs of ?SetBufferProperty@CAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( a4 && a5 == 8 )
    {
      v9 = *a4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_QWORD *)this + 13) = v9;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1 || !a4 || a5 != 8 )
    return (unsigned int)-1073741811;
  v8 = *a4;
  *((_DWORD *)this + 4) |= 0x400u;
  *((_QWORD *)this + 14) = v8;
LABEL_9:
  *a6 = 1;
  return v6;
}

__int64 __fastcall CVisual::ProcessSetPassiveUpdateMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_BYTE *)this + 102) = *((_BYTE *)this + 102) & 0xF7 | (*((_BYTE *)a3 + 8) != 0 ? 8 : 0);
  return result;
}

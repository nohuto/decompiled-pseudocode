__int64 __fastcall CCaptureRenderTarget::ProcessSetIsCursorEnabled(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 438) = 2 - (*((_BYTE *)a3 + 8) != 0);
  return result;
}

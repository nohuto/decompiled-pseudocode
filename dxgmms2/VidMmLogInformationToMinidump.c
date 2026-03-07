unsigned __int64 __fastcall VidMmLogInformationToMinidump(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  return VIDMM_GLOBAL::LogInformationToMinidump(a1, a2, a3, a4, a5, a6);
}

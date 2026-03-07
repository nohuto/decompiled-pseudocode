void __fastcall ValidateMinMaxVBlankDuration(
        const struct DXGI_OUTPUT_DWM_DESC *a1,
        LONGLONG *a2,
        LONGLONG *a3,
        unsigned int *a4)
{
  bool v5; // zf
  LONGLONG v6; // r8
  LONGLONG v7; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = (*((_DWORD *)a1 + 27) & 0x400) == 0;
  *a4 = 1;
  if ( !v5 )
  {
    v6 = g_qpcFrequency.QuadPart * *((unsigned int *)a1 + 15) / *((unsigned int *)a1 + 14);
    v7 = g_qpcFrequency.QuadPart * *((unsigned int *)a1 + 13) / *((unsigned int *)a1 + 12);
    if ( v6 != v7 )
    {
      *a3 = v7;
      *a4 = *((_DWORD *)a1 + 16);
      *a2 = v6;
    }
  }
}

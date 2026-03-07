void __fastcall CFrameInfo::Trace(CFrameInfo *this, int a2)
{
  unsigned __int64 v2; // [rsp+110h] [rbp-58h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v2 = (unsigned __int64)(10000000 * (*((_QWORD *)this + 9) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
       + 10000000 * (*((_QWORD *)this + 9) / g_qpcFrequency.QuadPart);
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer(
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 10) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 10) / g_qpcFrequency.QuadPart)
    - v2,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 8) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 8) / g_qpcFrequency.QuadPart)
    + (unsigned __int64)(10000000 * (*((_QWORD *)this + 30) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 30) / g_qpcFrequency.QuadPart)
    - v2,
      a2,
      *(_QWORD *)this,
      *((_DWORD *)this + 8),
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 27) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + ((unsigned __int8)(*((_QWORD *)this + 27) / g_qpcFrequency.QuadPart) << 7),
      *((_QWORD *)this + 27),
      *((_DWORD *)this + 12));
  }
}

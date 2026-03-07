__int64 __fastcall VidSchSetPriorityClassProcessX(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  __int64 i; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 result; // rax

  v3 = 0;
  v5 = 0;
  for ( i = 272LL; ; i += 8LL )
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + i) )
    {
      Global = DXGGLOBAL::GetGlobal();
      v10 = *(_QWORD *)(a1 + 64);
      v11 = *(_QWORD *)((char *)Global + i);
      if ( !v10 || (v10 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)v11 - 1) + 16)) == 0 )
      {
        WdLogSingleEntry1(1LL, 280LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidSchProcess", 280LL, 0LL, 0LL, 0LL, 0LL);
      }
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v11 + 8) + 96LL))(v10, a2, a3);
      v3 = result;
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v5 >= 2 )
      return v3;
  }
  return result;
}

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1, unsigned __int64 a2)
{
  struct DirectComposition::CProcessData *QuotaZInit; // rax
  struct DirectComposition::CProcessData *v4; // rbx
  unsigned int v5; // edx
  int v6; // edi

  QuotaZInit = (struct DirectComposition::CProcessData *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           a1,
                                                           a2,
                                                           0x48uLL,
                                                           0x64704344u);
  v4 = QuotaZInit;
  if ( !QuotaZInit )
  {
    v6 = -1073741801;
    goto LABEL_8;
  }
  memset(QuotaZInit, 0, 0x48uLL);
  *((_BYTE *)v4 + 48) = 0;
  v6 = DirectComposition::CConnection::OnProcessCreation(v4);
  if ( v6 >= 0 )
    v6 = DirectComposition::CChannel::OnProcessCreation(v4);
  if ( v6 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'(v4, v5);
LABEL_8:
    v4 = 0LL;
  }
  *((_QWORD *)a1 + 32) = v4;
  return (unsigned int)v6;
}

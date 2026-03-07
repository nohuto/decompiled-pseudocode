__int64 __fastcall DirectComposition::CCompClockInfo::Create(
        const struct tagCOMPOSITION_TARGET_ID *a1,
        struct DirectComposition::CCompClockInfo **a2)
{
  char *QuotaZInit; // rax
  DirectComposition::CCompClockInfo *v5; // rbx
  int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // edi

  *a2 = 0LL;
  QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         a1,
                         (unsigned __int64)a2,
                         0x14uLL,
                         0x64704344u);
  v5 = (DirectComposition::CCompClockInfo *)QuotaZInit;
  if ( QuotaZInit )
  {
    v6 = *((_DWORD *)a1 + 4);
    v7 = *(_QWORD *)a1;
    *((_DWORD *)QuotaZInit + 4) = 0;
    *((_DWORD *)QuotaZInit + 3) = v6;
    *(_QWORD *)(QuotaZInit + 4) = v7;
    v9 = DirectComposition::CCompClockInfo::Initialize((DirectComposition::CCompClockInfo *)QuotaZInit);
    if ( v9 < 0 )
    {
      DirectComposition::CCompClockInfo::`scalar deleting destructor'(v5, v8);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v5);
      *a2 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}

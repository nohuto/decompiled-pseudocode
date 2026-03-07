__int64 __fastcall DirectComposition::CAnimationBinding::Create(
        struct DirectComposition::CResourceMarshaler *a1,
        unsigned __int64 a2,
        struct DirectComposition::CBaseAnimation *a3,
        struct DirectComposition::CAnimationBinding **a4)
{
  unsigned int v6; // ebp
  DirectComposition::CAnimationBinding *QuotaZInit; // rax
  struct DirectComposition::CAnimationBinding *v9; // rbx
  __int64 result; // rax

  v6 = a2;
  QuotaZInit = (DirectComposition::CAnimationBinding *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         a1,
                                                         a2,
                                                         0x30uLL,
                                                         0x62614344u);
  v9 = QuotaZInit;
  if ( !QuotaZInit )
    return 3221225495LL;
  DirectComposition::CAnimationBinding::Initialize(QuotaZInit, a1, v6, a3);
  result = 0LL;
  *a4 = v9;
  return result;
}

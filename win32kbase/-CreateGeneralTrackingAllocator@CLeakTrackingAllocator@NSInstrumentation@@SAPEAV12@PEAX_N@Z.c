struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(
        void *a1)
{
  NSInstrumentation::CLeakTrackingAllocator::CreateCommon(a1);
  dword_1C02D4F10 = 1;
  qword_1C02D4F18 = (__int64)NSInstrumentation::CPointerHashTable::Create(0);
  if ( qword_1C02D4F18 )
    return (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10;
  NSInstrumentation::CLeakTrackingAllocator::Destroy((struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10);
  return 0LL;
}

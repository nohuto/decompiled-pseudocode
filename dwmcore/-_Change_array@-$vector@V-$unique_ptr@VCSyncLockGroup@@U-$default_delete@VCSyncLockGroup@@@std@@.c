__int64 __fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( CSyncLockGroup::g_syncLockGroups )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      (void ***)CSyncLockGroup::g_syncLockGroups,
      (void ***)qword_1803E30A8);
    std::_Deallocate<16,0>(
      (void *)CSyncLockGroup::g_syncLockGroups,
      (qword_1803E30B0 - CSyncLockGroup::g_syncLockGroups) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  CSyncLockGroup::g_syncLockGroups = a2;
  qword_1803E30A8 = a2 + 8 * a3;
  result = a2 + 8 * a4;
  qword_1803E30B0 = result;
  return result;
}

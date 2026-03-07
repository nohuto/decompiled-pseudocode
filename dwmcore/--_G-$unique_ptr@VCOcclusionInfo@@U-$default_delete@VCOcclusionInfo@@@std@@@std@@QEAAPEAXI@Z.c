__int64 (__fastcall ****__fastcall std::unique_ptr<COcclusionInfo>::`scalar deleting destructor'(
        __int64 (__fastcall ****a1)(_QWORD, __int64)))(_QWORD, __int64)
{
  if ( *a1 )
    std::default_delete<COcclusionInfo>::operator()((__int64)a1, *a1);
  return a1;
}

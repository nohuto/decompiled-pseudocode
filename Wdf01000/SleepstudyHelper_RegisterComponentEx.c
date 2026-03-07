int __fastcall SleepstudyHelper_RegisterComponentEx(
        SS_LIBRARY__ *InitializeHandle,
        _GUID *ParentGuid,
        _GUID *ComponentGuid,
        _UNICODE_STRING *FriendlyName,
        SS_COMPONENT__ **Handle)
{
  _GUID v5; // xmm1
  int result; // eax
  _GUID v7; // [rsp+30h] [rbp-28h] BYREF
  _GUID v8; // [rsp+40h] [rbp-18h] BYREF

  if ( !SleepstudyHelperRoutineBlock.RegisterComponentEx
    || (v5 = *ParentGuid,
        v7 = *ComponentGuid,
        v8 = v5,
        result = ((int (__fastcall *)(SS_LIBRARY__ *, _GUID *__struct_ptr, _GUID *__struct_ptr, _UNICODE_STRING *, SS_COMPONENT__ **))SleepstudyHelperRoutineBlock.RegisterComponentEx)(
                   InitializeHandle,
                   &v8,
                   &v7,
                   FriendlyName,
                   Handle),
        result == -1073741637) )
  {
    *Handle = (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle;
    return 0;
  }
  return result;
}

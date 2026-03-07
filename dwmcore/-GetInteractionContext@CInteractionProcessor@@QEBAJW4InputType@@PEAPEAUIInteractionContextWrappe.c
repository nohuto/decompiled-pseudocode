__int64 __fastcall CInteractionProcessor::GetInteractionContext(CInteractionProcessor *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 (__fastcall ***v9)(_QWORD); // rax

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    if ( *(_QWORD *)a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1);
      *a3 = *(_QWORD *)a1;
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((_QWORD *)a1 + 20) )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 20);
      v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 20);
      goto LABEL_13;
    }
    return (unsigned int)-2147019873;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      if ( *((_QWORD *)a1 + 60) )
      {
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 60);
        v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 60);
LABEL_13:
        *a3 = v9;
        return v3;
      }
      return (unsigned int)-2147019873;
    }
  }
  else
  {
    if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
    {
      if ( *((_QWORD *)a1 + 40) )
      {
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))a1 + 40);
        v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a1 + 40);
        goto LABEL_13;
      }
      return (unsigned int)-2147019873;
    }
    return (unsigned int)-2147467259;
  }
  return v3;
}

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406DC290(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}

void **__fastcall IsObjectPublic(void *a1)
{
  void **result; // rax

  for ( result = (void **)gpPublicObjectList; result && result[1] != a1; result = (void **)*result )
    ;
  return result;
}

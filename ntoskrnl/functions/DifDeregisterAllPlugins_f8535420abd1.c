void DifDeregisterAllPlugins()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  int *v2; // rbx
  __int64 v3; // rdi

  v0 = 0;
  v1 = DifPluginStates;
  do
  {
    if ( *v1 )
      DifDeregisterPlugin(v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 0x40 );
  v2 = &DifKernelPluginRules;
  v3 = 4LL;
  do
  {
    CarDeregisterRuleClassConfiguration((unsigned int)*v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
}

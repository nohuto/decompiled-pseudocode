/*
 * XREFs of ??_Gtest_flag@tip@@QEAAPEAXI@Z @ 0x1800A1F54
 * Callers:
 *     ?clear@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ @ 0x1800AB9B8 (-clear@-$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAA_N_K@Z @ 0x1800ADC18 (-reserve@-$vector_nothrow@Utest_flag@tip@@@tip@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

PROPVARIANT *__fastcall tip::test_flag::`scalar deleting destructor'(PROPVARIANT *this)
{
  PropVariantClear(this + 2);
  return this;
}
